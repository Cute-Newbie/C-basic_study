#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;

int main(void)
{
	const int value = 5; // value�� ���� �� �ٲ� 
	const int *ptr = &value; // 
	//*ptr = 6;// value�� 5�� �����Ǿ��ֱ� ������ �̷��Դ� ���� 

	int value1 = 5;
	const int* ptr = &value1;
	value1 = 6; // �̰� ��

	cout << *ptr << endl;

	int value2 = 6;
	ptr = &value2;
	//*ptr = 8 �̰� �ȵ� -> ������ const int* ptr�̰ɷ�  ptr�� 
	// ����Ű�� ���� �ٲ� �� ���� 

	int value3 = 7;
	int* const ptr1 = &value3;

	*ptr1 = 10;
	cout << *ptr1 << endl;

	int value4 = 8;
	//ptr1 = &value4; -> �̰� �ȵ�


	return 0;
}


	