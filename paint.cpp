#include <graphics.h>
#include <fstream>
#include "point.h"

using namespace std;

void mainloop();
int main(void){
	setinitmode(INIT_ANIMATION);
	initgraph(640,480);
	randomize();
	mainloop();
	closegraph();
	return 0;
}

void mainloop()
{
	int x =0;
	setcolor(EGERGB(0,0xFF,0));
	  int rad = 10;
	setfillcolor(EGERGB(0,0,0xFF));
	  point c1 (80,180,rad);
		point c2 (87,210,rad);
		point c3 (104,236,rad);
		point c4 (120,253,rad);
		point c5 (150,260,rad);
		point c6 (180,253,rad);
		
		point c7 (87,150,rad);
		point c8 (104,124,rad);
		point c9 (120,107,rad);
		point c10 (150,100,rad);
		point c11 (180,107,rad);
	
	
		point p1 (300,100,rad);
		point p2 (300,120,rad);
		point p3 (300,140,rad);
		point p4 (300,160,rad);
		point p5 (300,180,rad);
		point p6 (300,200,rad);
		point p7 (300,220,rad);
		point p8 (300,240,rad);
		point p9 (300,260,rad);

		point p11 (220,180,rad);
		point p12 (240,180,rad);
		point p13 (260,180,rad);
		point p14 (280,180,rad);
		point p15 (300,180,rad);
		point p16 (320,180,rad);
		point p17 (340,180,rad);
		point p18 (360,180,rad);
		point p19 (380,180,rad);
		
		point b1 (500,100,rad);
		point b2 (500,120,rad);
		point b3 (500,140,rad);
		point b4 (500,160,rad);
		point b5 (500,180,rad);
		point b6 (500,200,rad);
		point b7 (500,220,rad);
		point b8 (500,240,rad);
		point b9 (500,260,rad);

	
		point b11 (420,180,rad);
		point b12 (440,180,rad);
		point b13 (460,180,rad);
		point b14 (480,180,rad);
		point b15 (500,180,rad);
		point b16 (520,180,rad);
		point b17 (540,180,rad);
		point b18 (560,180,rad);
		point b19 (580,180,rad);
	for(;is_run();delay_ms(0))
	{
		
		    MOUSEMSG mouse;
			 mouse =  GetMouseMsg();
			 int x = mouse.x;
			 int y = mouse.y;
			
			 //ofstream file;
             //file.open("file.txt");		
             //file<<"x:"<<x<<"y:"<<y<<endl;	
			// file.close();		
			 // file<<"x:"<<p1.x_<<"y:"<<p1.y_<<endl;	
			// p1.updatepoint(x,y);
			 //file<<"x:"<<p1.x_<<"y:"<<p1.y_<<endl;	
			  //file.close();
			




		cleardevice();
		      
		
	
       c1.updatepoint(x,y);
		   c2.updatepoint(x,y);
			 c3.updatepoint(x,y);
			 c4.updatepoint(x,y);
			 c5.updatepoint(x,y);
			 c6.updatepoint(x,y);
			 c7.updatepoint(x,y);
			 c8.updatepoint(x,y);
			 c9.updatepoint(x,y);
			 c10.updatepoint(x,y);
			 c11.updatepoint(x,y);

			 
			 
		   p1.updatepoint(x,y);
		   p2.updatepoint(x,y);
			 p3.updatepoint(x,y);
			 p4.updatepoint(x,y);
			 p5.updatepoint(x,y);
			 p6.updatepoint(x,y);
			 p7.updatepoint(x,y);
			 p8.updatepoint(x,y);
			 p9.updatepoint(x,y);

			 p11.updatepoint(x,y);
			 p12.updatepoint(x,y);
			 p13.updatepoint(x,y);
			 p14.updatepoint(x,y);
			 p15.updatepoint(x,y);
			 p16.updatepoint(x,y);
			 p17.updatepoint(x,y);
			 p18.updatepoint(x,y);
			 p19.updatepoint(x,y);
		
		   c1.repaint();
			 c2.repaint();
			 c3.repaint();
			 c4.repaint();
			 c5.repaint();
			 c6.repaint();
			 c7.repaint();
			 c8.repaint();
			 c9.repaint();
			 c10.repaint();
			 c11.repaint();
			 
			 p1.repaint();
			 p2.repaint();
			 p3.repaint();
			 p4.repaint();
			 p5.repaint();
			 p6.repaint();
			 p7.repaint();
			 p8.repaint();
			 p9.repaint();

			 //p10.repaint();
			 p11.repaint();
			 p12.repaint();
			 p13.repaint();
			 p14.repaint();
			 p15.repaint();
			 p16.repaint();
			 p17.repaint();
			 p18.repaint();
			 p19.repaint();

		   b1.updatepoint(x,y);
		   b2.updatepoint(x,y);
			 b3.updatepoint(x,y);
			 b4.updatepoint(x,y);
			 b5.updatepoint(x,y);
			 b6.updatepoint(x,y);
			 b7.updatepoint(x,y);
			 b8.updatepoint(x,y);
			 b9.updatepoint(x,y);

			 b11.updatepoint(x,y);
			 b12.updatepoint(x,y);
			 b13.updatepoint(x,y);
			 b14.updatepoint(x,y);
			 b15.updatepoint(x,y);
			 b16.updatepoint(x,y);
			 b17.updatepoint(x,y);
			 b18.updatepoint(x,y);
			 b19.updatepoint(x,y);
		
		  
			 b1.repaint();
			 b2.repaint();
			 b3.repaint();
			 b4.repaint();
			 b5.repaint();
			 b6.repaint();
			 b7.repaint();
			 b8.repaint();
			 b9.repaint();

			 //p10.repaint();
			 b11.repaint();
			 b12.repaint();
			 b13.repaint();
			 b14.repaint();
			 b15.repaint();
			 b16.repaint();
			 b17.repaint();
			 b18.repaint();
			 b19.repaint();

//			 c1.paintellipse();
//			 c2.paintellipse();
//			 c3.paintellipse();
//			 c4.paintellipse();
//			 c5.paintellipse();
//			 c6.paintellipse();
//			 c7.paintellipse();
//			 c8.paintellipse();
//			 c9.paintellipse();
//			 c10.paintellipse();
//			 c11.paintellipse();
//			 c12.paintellipse();
//			 c13.paintellipse();
//			 c14.paintellipse();

	}
}