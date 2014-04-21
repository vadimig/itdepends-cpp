#include "prescription.h"

class Employee
{
public:

	void doIt()
	{
		mWork1->doSmth();
		mWork2->doSmth();
		mWork3->doSmth();
		mWork4->doSmth();
	}

private:
	inject(IWork, mWork1)
	inject(Work2, mWork2)
	inject(Work3, mWork3)
	inject(Work4, mWork4)
};


int main()
{
	Work4 w4;
	inject_set_runtime(Work4, &w4)
	{
		Employee e1;
		e1.doIt();
	}
	{
		Employee e2;
		e2.doIt();
	}
}
