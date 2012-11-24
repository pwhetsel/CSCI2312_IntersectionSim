//Patrick Whetsel
//CSCI 2312 Fall 2012
//rand_num.h
//class prototype for random number generator class

#ifndef _rand_num_h
#define _rand_num_h

class rand_num
{
public:
	//constructor
	rand_num (int);

	//Pre:
	//Post:
	int generate_vehicle ();


private:
	int seed;
};

#endif