#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#define NUM_STUDENTS 1000

using namespace std;

int main(void)
{
	char myString[] = "string"; //Null Character가 하나 포함됨 

	for (int i = 0; i < 7; i++)
	{
		cout << (int)myString[i] << endl;
	}//마지막에 0이 출력됨 -> 공백 문자가 있다는 것을 알 수 있음 

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