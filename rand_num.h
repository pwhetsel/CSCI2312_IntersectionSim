//Patrick Whetsel
//CSCI 2312 Fall 2012
//rand_num.h
//class prototype for random number generator class

#include <cstdlib>
#include <string>

#ifndef _rand_num_h
#define _rand_num_h

class rand_num
{
public:
	//constructor
	rand_num (int);

	//Pre: None
	//Post: 70% chance of returning 1 for car, 20% chance of returning 2 for bus, and 10% chance of returning 3 for truck
	std::string generate_vehicle();
	//Pre: takes a string of type of vehicle to generate time it takes for vehicle to pass through
	//Post: returns random value in the range of the passed type
	int generate_pass_time (std::string);


private:
	int seed;
};

#endif