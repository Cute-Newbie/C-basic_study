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
	/*�޸𸮸� ���� �ڵ�� ���� �ܼ��� Ȯ���ϴ°��� �ǹ̰� ����.
	������ �޸� �ּҸ� ������ ��Ƴ����� ���� �׸��� �װ� ��������  */

	//de-reference operator (*)

	cout << *(&x) << endl; // �ּҿ� ��� ���� Ȯ���� �� �ִ�.
	cout << x << endl;

	//Pointers: �޸� �ּҸ� ��� ����

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