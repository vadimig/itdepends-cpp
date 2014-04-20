#ifndef WORK_H
#define WORK_H

class Work2
{
public:
	Work2(int p1);
	virtual void doSmth();
	virtual ~Work2();

private:
	int mI;
	static int sI;
};

#endif