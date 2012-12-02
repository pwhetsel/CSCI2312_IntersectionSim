//Patrick Whetsel
//CSCI 2312 Fall 2012
//light.h
//class prototype for traffic light class

#include <iostream>

#ifndef _light_h
#define _light_h

class light
{
public:
	//constructor
	light (bool,bool,int,int);

	//Pre:unsigned to set red timer to to
	//Post:red timer is set to supplied unsigned
	void set_red_timer (unsigned);
	//Pre:unsigned to set green timer to to
	//Post:green timer is set to supplied unsigned
	void set_green_timer (unsigned);
	//Pre:bool to set red light to
	//Post:red light is set to supplied bool
	void set_red (bool);
	//Pre:bool to set green light to
	//Post:green light is set to supplied bool
	void set_green (bool);
	//Pre:none
	//Post:value of red timer is returned
	int get_red_timer ();
	//Pre:none
	//Post:value of green timer is returned
	int get_green_timer ();
	//Pre:none
	//Post:state of red light is returned
	bool get_red ();
	//Pre:none
	//Post:state of green light returned
	bool get_green ();
	//Pre:none
	//Post:returns number of seconds left until light turns red
	int green_left ();
	//Pre:none
	//Post:light that is on has timer increased by one, if timer max is reached light is switched off
	//and light that is off is turned on.
	void iterate_timer ();

private:
	int red_timer;
	int green_timer;
	int yellow_time;
	bool green;
	bool red;
	bool yellow;
};

#endif