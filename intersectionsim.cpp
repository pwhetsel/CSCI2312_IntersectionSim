//Patrick Whetsel
//CSCI 2312 Fall 2012
//intersectionsim.cpp
//This program simulates the traffic arriving and traveling past a traffic light
//in four directions for 300 seconds.  There is a 50% chance of a vehicle arriving
//in each of the 4 directions every second, and if a vehicle arrives there is a 70%
//chance it is a car, a 20% chance it is a truck, and a 10% chance it is a bus.  The
//program then outputs the results of the simulation in a column format.

#include <time.h>
#include <queue>
#include <deque>
#include "vehicle.h"
#include "darray.h"
#include "rand_num.h"
#include "light.h"
#include "intsimfunctions.h"

int main ()
{
	const int SIM_TIME = 20;
	rand_num generator(time(NULL));
	light northsouth(true,false,0,0);
	light eastwest(false,true,0,0);
	darray<vehicle> freeparking;
	std::queue<vehicle> north;
	std::queue<vehicle> south;
	std::queue<vehicle> east;
	std::queue<vehicle> west;

	intsimfunctions::greeting();

	for(int i = 0; i <= SIM_TIME; ++i)
	{
		intsimfunctions::generate_vehicle(north, generator);
		intsimfunctions::generate_vehicle(south, generator);
		intsimfunctions::generate_vehicle(east, generator);
		intsimfunctions::generate_vehicle(west, generator);

		try
		{
			if(northsouth.get_green() == true)
			{
				intsimfunctions::vehicle_passes(north, freeparking, northsouth.green_left());
				intsimfunctions::vehicle_passes(south, freeparking, northsouth.green_left());
			}
		
			if(eastwest.get_green() == true)
			{
				intsimfunctions::vehicle_passes(east, freeparking, eastwest.green_left());
				intsimfunctions::vehicle_passes(west, freeparking, eastwest.green_left());
			}
		
			if(eastwest.get_green() == true && northsouth.get_green() == true)
			{
				bool accident = true;
				throw accident;
			}
		}
		catch (bool accident_happened)
		{
			if (accident_happened == true)
			{
				std::cout << "\nError: There has been an accident! (Light is green in four directions)";
				return EXIT_FAILURE;
			}
		}
		northsouth.iterate_timer();
		eastwest.iterate_timer();
	}

	intsimfunctions::results(north, south, east, west, freeparking);

	intsimfunctions::exit_program();
}