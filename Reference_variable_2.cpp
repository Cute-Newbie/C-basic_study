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
  
	// �̷��� struct�� �����ϸ� �ڵ尡 ������� �������
	Other ot;

	ot.st.v1 = 1.0;
	//

	// �䷸�� ����ϸ� ���� 
	int& v1 = ot.st.v1;
	v1 = 1;
    // 

		
	return 0;
}


	