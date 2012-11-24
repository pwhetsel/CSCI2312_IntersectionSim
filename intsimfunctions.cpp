//Patrick Whetsel
//CSCI 2312 Fall 2012
//intsimfunctions.cpp
//global function definitions

#include "intsimfunctions.h"

void intsimfunctions::greeting()
{
	std::cout << "Welcome.  This program simulates the traffic\n";
	std::cout << "arriving and traveling past a traffic light in\n";
	std::cout << "four directions for 300 seconds.  There is a\n";
	std::cout << "50% chance of a vehicle arriving in each of the\n";
	std::cout << "4 directions every second, and if a vehicle\n";
	std::cout << "arrives there is a 70% chance it is a car, a\n";
	std::cout << "20% chance it is a truck, and a 10% chance it\n";
	std::cout << "is a bus.  The program then outputs the results\n";
	std::cout << "of the simulation in a column format. \n";
	std::cout << "Please Press any key followed by enter to begin\n";
	std::cout << "the simulation. ";

	int in;
	std::cin >> in;
}
void intsimfunctions::generate_vehicle(std::queue<vehicle>, rand_num)
{

}
void intsimfunctions::vehicle_passes(std::queue<vehicle>,darray<vehicle>, int)
{

}
void intsimfunctions::results(std::queue<vehicle>,std::queue<vehicle>,std::queue<vehicle>,std::queue<vehicle>,darray<vehicle>)
{

}
int intsimfunctions::exit_program()
{
	std::cout << "\nPlease press any key followed by enter to exit the program.\n";
	int in;
	std::cin >> in;
	return EXIT_SUCCESS;
}