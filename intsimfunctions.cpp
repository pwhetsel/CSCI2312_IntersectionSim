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
void intsimfunctions::generate_vehicle(std::queue<vehicle>line, rand_num gen)
{
	//50% chance of vehicle being generated
	int chance = rand() % 2;
	if (chance < 1)
	{
		std::string type = gen.generate_vehicle();
		int time = gen.generate_pass_time (type);
		vehicle temp(time, type);
		line.push(temp);
	}
}
void intsimfunctions::vehicle_passes(std::queue<vehicle> line, darray<vehicle> parking, int time_left)
{
	vehicle temp = line.front();
	if (temp.get_time_to_pass() <= time_left)
	{
		parking.push(temp);
		line.pop();
	}
}
void intsimfunctions::results(std::queue<vehicle>line1 ,std::queue<vehicle> line2 ,std::queue<vehicle> line3,std::queue<vehicle> line4,darray<vehicle> parking)
{
	unsigned arrived = 0;
	unsigned passed = 0;
	unsigned waiting = 0;
	
	while (!line1.empty())
	{
		line1.pop();
		++waiting;
	}
	while (!line2.empty())
	{
		line2.pop();
		++waiting;
	}
	while (!line3.empty())
	{
		line3.pop();
		++waiting;
	}
	while (!line4.empty())
	{
		line4.pop();
		++waiting;
	}
	while (!parking.isEmpty())
	{
		parking.erase();
		++passed;
	}
	arrived = passed + waiting;
	std::cout << "\nArrived: " << arrived;
	std::cout << "\nPassed: " << passed;
	std::cout << "\nWaiting: " << waiting;
}
int intsimfunctions::exit_program()
{
	std::cout << "\nPlease press any key followed by enter to exit the program.\n";
	int in;
	std::cin >> in;
	return EXIT_SUCCESS;
}