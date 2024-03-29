//Patrick Whetsel
//CSCI 2312 Fall 2012
//light.cpp
//class definition for traffic light class

#include "light.h"

unsigned GRN_TIME = 20;
unsigned RED_TIME = 20;
unsigned YELLOW_TIME = 2;


light::light (bool green_in,bool red_in,int greent,int redt)
{
	red_timer = redt;
	green_timer = greent;
	green = green_in;
	red = red_in;
	yellow_time = 0;
	yellow = false;
}

void light::set_red_timer (unsigned in)
{
	red_timer = in;
}

void light::set_green_timer (unsigned in)
{
	green_timer = in;
}

void light::set_red (bool in)
{
	red = in;
}

void light::set_green (bool in)
{
	green = in;
}

int light::get_red_timer ()
{
	return red_timer;
}

int light::get_green_timer ()
{
	return green_timer;
}

bool light::get_red ()
{
	return red;
}

bool light::get_green ()
{
	return green;
}

int light::green_left ()
{
	int temp;
	temp = GRN_TIME - green_timer;
	return temp;
}

void light::iterate_timer ()
{
	if (green == true)
	{
		if (green_timer < GRN_TIME)
		{
			++green_timer;
		}

		else
		{
			green_timer = 0;
			green = false;
			red = true;
		}
	}
	else
	{
		if (red_timer < RED_TIME)
		{
			++red_timer;
		}

		else
		{
			red_timer = 0;
			red = false;
			green = true;
		}
	}
}