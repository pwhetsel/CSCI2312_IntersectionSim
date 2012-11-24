//Patrick Whetsel
//CSCI 2312 Fall 2012
//vehicle.cpp
//class definition for vehicle class

#include "vehicle.h"

vehicle::vehicle(int time, std::string kind)
{
	time_to_pass = time;
	type = kind;
}

void vehicle::set_time_to_pass(int time)
{
	time_to_pass = time;
}
void vehicle::set_type(std::string type_in)
{
	type = type_in;
}
int vehicle::get_time_to_pass()
{
	return time_to_pass;
}
std::string vehicle::get_type()
{
	return type;
}