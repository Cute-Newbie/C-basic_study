#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
/*��� Static Array�� �׳� array�� �����*/

void printArray(int *array);
void printArray(int *array)
{
	cout << sizeof(array) << endl;
	cout << array << endl;
	*array = 100;

}



int main(void)
{
	int array[5] = { 9,7,5,3,1 };
	cout << array << endl; //-> �ּ����
	cout << &array[0] << endl;// ���� �ڵ�� ����� ������ �� �� ����
	printArray(array);// �׳� �������� size�� ��µ� -> array�� ���°� �ƴ϶�
	// array�� ����Ű�� �����Ͱ� �� 
	cout << array[0]<<endl;// �Լ� �ȿ����� ���� �ٲ�� ����
	return 0;
}