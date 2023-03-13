#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

void addOne_ref(int& y);
void addOne_ref(int& y)
{
	y = y + 1;

}// call by reference

void addOne_val(int y);
void addOne_val(int y)
{

	y += 1;

}//call by value

void getSinCos(double degrees, double &sin_out, double &cos_out);
void getSinCos(double degrees, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592;
	double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);

}
void foo(int*& ptr);
void foo(int*& ptr)
{
	cout << ptr <<" "<<&ptr<< endl;

}

void printElement(int (&arr)[4]);
void printElement(int(&arr)[4])
{
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " ";
	}

}


int main(void)
{
	int x = 5;

	int y = 5;
	
	double sin(0.0);
	double cos(0.0);

	int* ptr = &x;
	int arr[] = { 1,2,3,4,};


	cout << x << " " << &x << endl; // 1
	addOne_ref(x);
	cout << x << " " << &x << endl; // 2 -> 1과 주소가 같음을 확인할 수 있다.
	addOne_val(y);
	cout << y << " " << &y << endl;

	getSinCos(30.0, sin, cos);
	cout << sin <<" "<< cos << endl;
	foo(ptr);
	printElement(arr);

	return 0;
}