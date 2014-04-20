#include "prescription.h"

class Employee
{
public:

	void doIt()
	{
		mWork1->doSmth();
		mWork2->doSmth();
		mWork3->doSmth();
	}

private:
	inject(IWork, mWork1)
	inject(Work2, mWork2)
	inject(Work3, mWork3)

};


int main()
{
	{
		Employee e1;
		e1.doIt();
	}
	{
		Employee e2;
		e2.doIt();
	}
}
