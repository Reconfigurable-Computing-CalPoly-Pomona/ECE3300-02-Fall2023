#include <signal.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include <thread>

#include "verilated.h"
#include "Vpong_top.h"  
#include "testb.h"
#include "vgasim.h"

#ifdef	NEW_VERILATOR
#define	VVAR(A)	busmaster__DOT_ ## A
#else
#define	VVAR(A)	v__DOT_ ## A
#endif

class	TESTBENCH : public TESTB<Vpong_top> {
private:
	unsigned long	m_tx_busy_count;
	bool		m_done, m_test;
	char		m_clkcount;
public:
	VGAWIN		m_vga;
private:

	void	init(void) {
		// m_core->i_hm_width  = m_vga.width();
		// m_core->i_hm_porch  = m_vga.hporch();
		// m_core->i_hm_synch  = m_vga.hsync();
		// m_core->i_hm_raw    = m_vga.raw_width();
		
		// m_core->i_vm_height = m_vga.height();
		// m_core->i_vm_porch  = m_vga.vporch();
		// m_core->i_vm_synch  = m_vga.vsync();
		// m_core->i_vm_raw    = m_vga.raw_height();
		
		// m_core->i_test      = (m_test) ? 1 : 0;
		//
		m_done = false;
		m_clkcount = 0;

		Glib::signal_idle().connect(sigc::mem_fun((*this),&TESTBENCH::on_tick));
	}
public:

	// TESTBENCH(void) : m_test(false), m_vga(1280, 1024) {
	// 	init();
	// }

	TESTBENCH(int hres, int vres) : m_test(false), m_vga(hres, vres) {
		init();
	}

	// void	trace(const char *vcd_trace_file_name) {
		// fprintf(stderr, "Opening TRACE(%s)\n", vcd_trace_file_name);
		// opentrace(vcd_trace_file_name);
	// }

	// void	close(void) {
		//TESTB<BASECLASS>::closetrace();
		// m_done = true;
	// }

	// void	test_input(bool test_data) {
		// m_test = test_data;
		// m_core->i_test = (m_test) ? 1:0;
	// }

	bool	clk_tick(void) {
		if (m_done)
			return true;

		TESTB<Vpong_top>::tick();
		// if (m_clkcount >= 3)
		// {
			// TESTB<Vpong_top>::pix_tick();
			m_vga((m_core->vsync)?1:0, (m_core->hsync)?1:0,
				((m_core->rgb) & 0xF00) >> 4,
				(m_core->rgb) & 0x0F0,
				((m_core->rgb) << 4));
		// 	m_clkcount = 0;
		// } 	else m_clkcount++;


		// if (m_clkcount >= 3)
		// {
		// 	m_vga((m_core->vsync)?1:0, (m_core->hsync)?1:0,
		// 		((m_core->rgb) & 0xF00) >> 4,
		// 		(m_core->rgb) & 0x0F0,
		// 		((m_core->rgb) << 4));
		// 	m_clkcount = 0;
		// }
		// else m_clkcount++;

		// TESTB<Vpong_top>::tick();
		return true;
	}

	bool	on_tick(void) {
		for(int i=0; i<10000; i++)
			clk_tick();
		return true;
	}
};

TESTBENCH *tb;

bool VGAWIN::onKeyPress(GdkEventKey* event)
{
    //std::cout << std::hex << event->keyval << ' ' << event->hardware_keycode << ' ' << event->state << std::endl;
	switch (event->keyval) {
		case GDK_KEY_Up: // right up
			//printf("up");
			tb->up();
			break;
		case GDK_KEY_Down: // right down
			//printf("down");
			tb->down();
			break;
		case GDK_KEY_w:
			tb->w();
			break;
		case GDK_KEY_s:
			tb->s();
			break;

		default:
			// printf(tb->m_vga->m_core->);
			break;
	}

    return false;
}

bool VGAWIN::onKeyRelease(GdkEventKey* event)
{
	//printf("Key release 2");
	tb->key_release();

	return false;
}

int main (int argc, char **argv) {
	Gtk::Main main_instance(argc,argv);
	Verilated::commandArgs(argc, argv);
	bool	test_data = false, verbose_flag = false;;
	char	*ptr = NULL;
	int	hres = 640, vres = 480;
	
	tb = new TESTBENCH(hres,vres);
	tb->reset();
	
	Gtk::Main::run(tb->m_vga);

	exit(0);
}