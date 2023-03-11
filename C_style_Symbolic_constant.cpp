#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
/*사실 Static Array나 그냥 array나 비슷함*/

int main(void)
{
	const char* name = "Jack Jack";
	const char* name2 = "Jack Jack";
	
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl; //변수명이 다른데 메모리 주소가 같음

	return 0;
}


	