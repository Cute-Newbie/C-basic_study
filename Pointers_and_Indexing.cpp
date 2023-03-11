#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
/*사실 Static Array나 그냥 array나 비슷함*/

int main(void)
{
	int value = 7;
	int* ptr = &value;
	int array[] = { 9,8,7,6,5, };
	
	cout << uintptr_t(ptr) << endl; // 10진수 포인터 출력
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;
	cout << uintptr_t(ptr + 3) << endl;
	cout << endl;

	cout << array[0] << " " << uintptr_t(&array[0]) << endl;
	cout << array[1] << " " << uintptr_t(&array[1]) << endl;
	cout << array[2] << " " << uintptr_t(&array[2]) << endl;
	cout << array[3] << " " << uintptr_t(&array[3]) << endl;
	cout << array[4] << " " << uintptr_t(&array[4]) << endl;
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " " << uintptr_t(&array[i]) << endl;
	}





	return 0;




}