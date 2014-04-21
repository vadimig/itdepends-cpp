#include "Work4.h"
#include <iostream>

int Work4::sI = 0;

void Work4::doSmth()
{
	std::cout << "Work4 #" << mI << ": effective work" << std::endl;
}

Work4::Work4()
: mI(++sI)
{
	std::cout << "Work4 #" << mI << ": created" << std::endl;
}

Work4::~Work4()
{
	std::cout << "Work4 #"  << mI << ": destroyed" << std::endl;
}
