#ifndef WORK1_H
#define WORK1_H

#include "IWork.h"

class Work1 : public IWork
{
public:
	Work1();
	virtual void doSmth();
	virtual ~Work1();

private:
	int mI;
	static int sI;
};

#endif