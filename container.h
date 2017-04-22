//=======================
//		container.h
//=======================

// The so-called inventory of a player in RPG games
// contains two items, heal and magic water
#include <iostream>
using namespace std;
#ifndef _CONTAINER //1_?????????????		// Conditional compilation
#define _CONTAINER

class container		// Inventory
{
protected:
	int numOfHeal;			// number of heal
	int numOfMW;			// number of magic water
public:
	container();			// constuctor
	void set(int heal_n, int mw_n);	// set the items numbers
	int nOfHeal();			// get the number of heal
	int nOfMW();			// get the number of magic water
	void display();			// display the items;
	bool useHeal();			// use heal
	bool useMW();			// use magic water
    void getMore(int, int);
};

#endif
