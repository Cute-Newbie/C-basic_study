#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <vector>
//#include <cstring>

using namespace std;
void printLength(array<int, 5> &array);
void printLength(array<int, 5> & array)
{
	cout << array.size() << endl;
}


int main(void)
{
	//std::array<int,5>array;
	//동적할당
	//std::vector<int>array; // size 안 적어도 됨

	std::vector<int>array = { 1,2,3,4,5 };
	cout << array.size() << endl;

	vector<int>arr = { 1,2,3,4,5 };

	for (auto& itr : arr)
	{
		cout << itr << " ";
	}

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	//vector은 메모리를 알아서 지워 줌 

	arr.resize(10);
	cout << arr.size() << endl;


		
	return 0;
}


	