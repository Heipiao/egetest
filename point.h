#pragma once
#include <graphics.h>
class point
{
public:
	float x_;
	float y_;
	float radius_;
	
		
	float currentx;
	float currenty;
	point(void);
	point(float x,float y,float radius);
	void point::paintellipse(void);
	void point::updatepoint(int mousx ,int mousy);
	void point::repaint();
	~point(void);
};

