//Patrick Whetsel
//CSCI 2312 Fall 2012
//vehicle.h
//class prototype for vehicle class

#include <string>

#ifndef _vehicle_h
#define _vehicle_h

class vehicle
{
public:
	//default constructor
	vehicle();
	//copy constructor
	vehicle(const vehicle&);
	//parameterized constructor
	vehicle(int, std::string);
	//Pre:int to set time_to_pass
	//Post: time_to_pass is set to supplied int
	void set_time_to_pass(int);
	//Pre:string to set type
	//Post: type is set to supplied string
	void set_type(std::string);
	//Pre:none
	//Post:time_to_pass is returned
	int get_time_to_pass();
	//Pre:none
	//Post:type is returned
	std::string get_type();

private:
	int time_to_pass;
	std::string type;
};

#endif