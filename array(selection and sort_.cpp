#include <iostream>
using namespace std;
#define NUM_STUDENTS 1000

using namespace std;

int main(void)
{
	int value;
	int key;
	int temp;
	int arr[] = { 3,5,2,1,4 };
	int end = sizeof(arr) / sizeof(int);
	
	for (int i = 0; i < end - 1; i++)
	{
		value = arr[i];
		key = i;

		//
		for (int j = i + 1; j < end; j++)
		{
			if (value > arr[j])
			{
				value = arr[j];
				key = j;
			}

		}
		//
				temp = arr[i];
		arr[i] = value;
		arr[key] = temp;
	}


	for (int i = 0; i < 5; i++)
	{
	std:cout << arr[i] << " ";
	}


	return 0;
}