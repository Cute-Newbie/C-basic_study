#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#define NUM_STUDENTS 1000

using namespace std;

void doSomething(double* ptr);
void doSomething(double* ptr)
{
	if (ptr == NULL)
	{
		cout << "nullPointer" << endl;
	}
	else
	{
		cout << ",,," << endl;
	}
	return;

}


int main(void)
{
	double* ptr = NULL;
	//cout << *ptr << endl; //nullptr�̿��� ���� ���� 
	doSomething(ptr);

	return 0;
}