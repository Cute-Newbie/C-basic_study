#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;
// void pointer, generic pointer -> 모든 자료형을 다룰 수 있는 포인터
int main(void)
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f; // 전부 괜찮음 
	//ptr = &c;

	//cout << ptr + 1 << endl; -> 이거 안됨

	cout << &f << " "<< ptr << endl;
	//cout << &f << " " << *ptr << endl; -> 이거 안됨

	//강제로 casting
	cout << *static_cast<float*>(ptr) << endl;


	return 0;

	
}


	