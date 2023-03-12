#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
//#include <cstring>

using namespace std;
void printLength(array<int, 5> &array);
void printLength(array<int, 5> & array)
{
	cout << array.size() << endl;
}


int main(void)
{
	std::array<int,5> my_arr = { 1,2,3,4,5 };

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl;
	printLength(my_arr);
	return 0;
	
}


	