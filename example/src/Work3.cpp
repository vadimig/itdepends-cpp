#include "Work3.h"
#include <iostream>

int Work3::sI = 0;

void Work3::doSmth()
{
	std::cout << "Work3 #" << mI << ": effective work" << std::endl;
}

Work3::Work3(int p1, bool p2)
: mI(++sI)
{
	std::cout << "Work3 #" << mI << ": created with parameters " << p1 << " and " << p2 << std::endl;
}

Work3::~Work3()
{
	std::cout << "Work3 #"  << mI << ": destroyed" << std::endl;
}
