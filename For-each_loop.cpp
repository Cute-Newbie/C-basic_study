#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;

int main(void)
{

	int fibo[] = {0,1,1,2,3,5,8,13,
				  21,34,55,89 };
	
	int arr[] = { 1,1,1,1 };


	for (int number : fibo)
	{
		cout << number << " ";
		
	}
	cout << endl;

	for (int number : arr)
	{
		cout << number << " ";

	}
	cout << endl;
	
	
	
	for (int& number : arr)
	{
		number = 10;
	}

	for (int number : arr)
	{
		cout << number << " ";

	}
	cout << endl;



	return 0;

	
}


	