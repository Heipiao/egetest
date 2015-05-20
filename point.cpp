#include "point.h"
#include <math.h>


point::point(void)
{
}

point::point(float x,float y,float radius)
{
	x_ = x;
	y_ = y;
	radius_ = radius;

}
void point::paintellipse()
{
	setfillcolor(EGERGB(223,34,2));
	fillellipse(x_, y_, radius_,radius_);
}

void point::updatepoint(int mousx ,int mousy)
{
	float friction = 0.8;
	float springStrength = 0.1;
	
	float targetx = x_;
	float targety = y_;
	float originalx = x_;
	float originaly = y_;

	float dx = mousx - currentx;
	float dy = mousy - currenty;
	float dd = (dx * dx) + (dy * dy);
	float d  = sqrt(dd);

  if(d<150){
  	 targetx =(mousx<currentx)?currentx + 150:currentx - 150;
  	 targety =(mousy<currenty)?currenty + 150:currenty - 150;
  	}else
  		{
  			targetx =  originalx;
  			targety =  originaly;
  			}
	
	float ddx = targetx - currentx;
	float ax = ddx * springStrength;
	float vx = 0;
	      vx += ax;
	      vx *= friction;
	      currentx += vx;
	     
	
	float ddy = targety - currenty;
	float ay = ddy * springStrength;
	float vy = 0;
		    vy += ay;
	      vy *= friction;
	      currenty += vy;
	    
	    
	float dox = originalx - currentx; 
	float doy = originaly - currenty; 
	float dod = (dox * dox)+(doy * doy);
	float dooo  = sqrt(dod);
	  
	float targetz = dooo/10 +1;
	float currentz = 0;
	float dz = targetz - currentz;
	float az = dz * springStrength;
	float vz = 0;
		  vz += az;
	      vz *= friction;
	      currentz += vz;
	 
	 radius_ = 10 * currentz;
	 if(radius_<8)  radius_=8;

}
void point::repaint()
{
	int red = random(200)+23;
	int green = random(40);
	int blue = random(60);
  setfillcolor(EGERGB(red,blue,green));
	setcolor(EGERGB(red,34,green));
	fillellipse(currentx, currenty, radius_,radius_);
}

point::~point(void)
{
}
