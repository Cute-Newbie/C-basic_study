#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;
// void pointer, generic pointer -> ��� �ڷ����� �ٷ� �� �ִ� ������
int main(void)
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f; // ���� ������ 
	//ptr = &c;

	//cout << ptr + 1 << endl; -> �̰� �ȵ�

	cout << &f << " "<< ptr << endl;
	//cout << &f << " " << *ptr << endl; -> �̰� �ȵ�

	//������ casting
	cout << *static_cast<float*>(ptr) << endl;


	return 0;

	
}


	