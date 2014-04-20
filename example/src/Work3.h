#ifndef WORK3_H
#define WORK3_H

class Work3
{
public:
	Work3(int p1, bool p2);
	virtual void doSmth();
	virtual ~Work3();

private:
	int mI;
	static int sI;
};

#endif