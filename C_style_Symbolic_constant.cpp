#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
/*��� Static Array�� �׳� array�� �����*/

int main(void)
{
	const char* name = "Jack Jack";
	const char* name2 = "Jack Jack";
	
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl; //�������� �ٸ��� �޸� �ּҰ� ����

	return 0;
}


	