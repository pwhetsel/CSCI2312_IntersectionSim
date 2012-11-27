//Patrick Whetsel
//CSCI 2312 Fall 2012
//rand_num.cpp
//class definition for random number generator class

#include "rand_num.h"

rand_num::rand_num (int seed_in)
{
	seed = seed_in;
	srand(seed);
}

int rand_num::generate_vehicle ()
{
	int CAR = 1;
	int TRUCK = 2;
	int BUS = 3;
	int CAR_CHANCE = 70;
	int TRUCK_CHANCE = 90;
	int BUS_CHANCE = 100;

	unsigned temp = rand() % 100;
	
	if ( temp < CAR_CHANCE)
		return CAR;
	else if ( temp >= CAR_CHANCE && temp < TRUCK_CHANCE)
		return TRUCK;
	else
		return BUS;
}

int rand_num::generate_pass_time (std::string type_in)
{
	//Cars take from 2 to 3 seconds.
	//Busses take from 2 to 4 seconds.
	//Trucks take from 2 to 5 seconds.

	if (type_in == "CAR")
	{
		int temp = rand() % 2 + 2;
		return temp;
	}
	else if (type_in == "BUS")
	{
		int temp = rand() % 3 + 2;
		return temp;
	}
	else
	{
		int temp = rand() % 4 + 2;
		return temp;
	}
}