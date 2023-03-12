#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;

struct Person
{
	int age;
	double weight;

};


int main(void)
{

	Person person;
	person.age = 5;//member selection operator 
	person.weight = 30; //member selection operator

	Person& ref = person;
	ref.age = 15;
	ref.weight = 50; 

	Person* ptr = &person;

	ptr->age = 30;
	ptr->weight = 80;

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl; // 주소값이 같음을 알 수 있다.
	cout << &ref2 << endl;

	return 0;

	
}


	