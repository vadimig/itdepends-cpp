#include "Work1.h"
#include <iostream>

int Work1::sI = 0;

void Work1::doSmth()
{
	std::cout << "Work1 #" << mI << ": effective work" << std::endl;
}

Work1::Work1()
: mI(++sI)
{
	std::cout << "Work1 #" << mI << ": created" << std::endl;
}

Work1::~Work1()
{
	std::cout << "Work1 #" << mI << ": destroyed" << std::endl;
}
