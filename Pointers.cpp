#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#define NUM_STUDENTS 1000

using namespace std;

struct Something
{
	int a, b, c;

};


int main(void)
{
	int x = 5;
	
	cout << x << endl;
	cout << &x << endl; // &: address of operator
	cout << (int)&x << endl; // &: address of operator
	cout << endl;
	/*메모리를 위의 코드와 같이 단순히 확인하는것은 의미가 없다.
	하지만 메모리 주소를 변수에 담아놓으면 편함 그리고 그게 포인터임  */

	//de-reference operator (*)

	cout << *(&x) << endl; // 주소에 담긴 값을 확인할 수 있다.
	cout << x << endl;

	//Pointers: 메모리 주소를 담는 변수

	int *ptr_x;
	ptr_x = &x;
	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	cout << typeid(ptr_x).name() << endl;

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;


	return 0;
}