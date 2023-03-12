#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;
void printElements(int (& arr)[5]);
void printElements(int (& arr)[5])
{

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<" ";
	}
	cout<< endl;

	return;
}

struct Something
{
	int v1;
	float v2;

};

struct Other
{
	Something st;
}


int main(void)
{
	const int length = 5;

	int arr[length] = { 1,2,3,4,5 };
	printElements(arr);
  
	// 이렇게 struct에 접근하면 코드가 길어지면 어려워짐
	Other ot;

	ot.st.v1 = 1.0;
	//

	// 요렇게 사용하면 좋음 
	int& v1 = ot.st.v1;
	v1 = 1;
    // 

		
	return 0;
}


	