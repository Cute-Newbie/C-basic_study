#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#define NUM_STUDENTS 1000

using namespace std;

int main(void)
{
	char myString[] = "string"; //Null Character�� �ϳ� ���Ե� 

	for (int i = 0; i < 7; i++)
	{
		cout << (int)myString[i] << endl;
	}//�������� 0�� ��µ� -> ���� ���ڰ� �ִٴ� ���� �� �� ���� 

	char newString[255];
	
	cin.getline(newString, 255);
	cout << newString << endl;
	int idx = 0;
	while (true)
	{
		if (newString[idx] == '\0')
		{
			break;
		}
		cout << newString[idx] << endl;
		++idx;
	}
	
	char source[] = "copy this";
	char dest[50];
	strcpy(dest, source);

	cout << source << endl;
	cout << dest << endl;



	return 0;
}