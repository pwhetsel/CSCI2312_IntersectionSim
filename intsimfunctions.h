//Patrick Whetsel
//CSCI 2312 Fall 2012
//intsimfunctions.h
//global function prototypes

#include <iostream>
#include <iomanip>
#include <queue>
#include <cstdlib>
#include "darray.h"
#include "light.h"
#include "vehicle.h"

#ifndef _intsimfunctions_h
#define _projectfunctions_h

namespace intsimfunctions
{
	//Pre:None
	//Post:Displays program gretting
	void greeting();
	//Pre:queue holding vehicles, rand_num object
	//Post:a random vehicle is created and pushed into the passed queue
	void generate_vehicle(std::queue<vehicle>, rand_num);
	//Pre:takes a queue holding vehicles, darray holding vehicles, and int of time remaining on green light
	//Post:if first vehicle in queue takes less time to pass through the intersection than the time remaining
	//on the green light the vehicle is popped from the queue and pushed to the darray
	void vehicle_passes(std::queue<vehicle>,darray<vehicle>, int);
	//Pre:requires four queues of vehicles wating at intersection and one darray of vehicles that have passed through
	//Post:displays a formatted output of the total number of vehicles that have arrived at the intersection,
	//the number of vehicles waiting at the intersection, and the number that have passed through
	void results(std::queue<vehicle>,std::queue<vehicle>,std::queue<vehicle>,std::queue<vehicle>,darray<vehicle>);
	//Pre: none
	//Post: Program holds for user input to exit program
	int exit_program();
}

#endif