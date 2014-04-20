#ifndef WORK1_H
#define WORK1_H

class Work1
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