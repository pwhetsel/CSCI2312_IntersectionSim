//Patrick Whetsel
//CSCI 2312 Fall 2012
//darray.h
//template prototype for darray


#ifndef _DARRAY_h
#define _DARRAY_h

template <typename T> class darray;
template <typename T> std::ostream& operator << (std::ostream&, const darray<T>&);

template <typename T>
class darray
{
public:
	//constructors
	darray (); //default
	darray (const darray&); //copy
	darray (unsigned int, unsigned int, T*);
		
	//destructor
	~darray();
	
	//constant functions
	//Pre:none
	//Post:returns member capacity
	unsigned capacity () const;
	//Pre:none
	//Post:returns member used
	unsigned usedElements () const;
	
	//constant getter
	//Pre: index of element to return
	//Post: copy of element at index
	const T get(const unsigned int) const;
	
	//Pre:None
	//Post: returns true if cap is 0
	bool isEmpty ();

	//mutators
	//Pre: none
	//Post: sets used to 0, all capacity now available
	void erase ();
	//Pre: none
	//Post: last entered element will be overwitten in next push
	void eraseOne ();
	//Pre: item to be pushed to array
	//Post: item is pushed to next open element, capacity is doubled if array is full
	void push (const T&);
	//Pre: array is not empty
	//Post: last element put in array is returned, then will be overwritten with next push
	T pop ();
	//Pre: none
	//Post: supplied element is inserted in specified position
	void insert (const T, const unsigned int);
	//Pre: Value to search for in darray
	//Post: Pointer to element holding value is returned
	const T* find (const T&) const;

	//overloaded operators
	T operator [] (unsigned) const;
	darray& operator = (const darray&);

	//friends
	friend std::ostream& operator << <T>(std::ostream&, const darray<T>&);
	

private:
	unsigned int cap;
	unsigned int used;
	T* data;

};

#include "darray.tem"

#endif

