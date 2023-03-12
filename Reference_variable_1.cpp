#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;
void doSomething(int n);
void doSomething(int n)
{
	n = 10;
	cout << "In doSomething" << n << endl;
	return;
}


void doSomething1(int &n);
void doSomething1(int &n)
{
	n = 10;
	cout << "In doSomething" << n << endl;
	return;
}



int main(void)
{
	int value = 5;
	
	int* ptr = nullptr;
	ptr = &value;

	int &ref = value; // 같은 메모리를 사용하는 것처럼 작동.//

	cout << ref << endl;

	ref = 10;

	cout << value << " " << ref << endl;
	cout << &value << endl;
	cout << &ref << endl; // 주소가 같음을 알 수 있음 이름만 다름 -> 메모리는 같음
	cout << ptr << endl;
	cout << &ptr << endl;// 포인터 변수도 변수다.

	int x = 5;
	int& ref1 = x;

	const int y = 8;
	//int &ref = y; -> 이거 안됨: const를 그냥 reference에 넣으려면 안됨
	//const int &ref1 = y;

	int value1 = 5;
	int value2 = 10;
	int& ref2 = value1;

	cout << ref2 << endl;

	ref2 = value2;

	cout << ref2 << endl;

	int n = 5;
	cout << n << endl;
	doSomething(n);
	cout << n << endl; // 다시 출력하니까 5가 나옴

	int n1 = 5;
	int& ref3 = n1;
	cout << n1 << endl;
	doSomething1(ref3);
	cout << n1 << endl;





	
	return 0;
}


	