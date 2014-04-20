#include "Work2.h"
#include <iostream>

int Work2::sI = 0;

void Work2::doSmth()
{
	std::cout << "2#" << mI << ": effective work" << std::endl;
}

Work2::Work2(int p1)
: mI(++sI)
{
	std::cout << "2#" << mI << ": created with parameter" << p1 << std::endl;
}

Work2::~Work2()
{
	std::cout << "2#" << mI << ": destroyed" << std::endl;
}
