#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

using namespace std;

int main(void)
{
	const int value = 5; // value의 값은 못 바꿈 
	const int *ptr = &value; // 
	//*ptr = 6;// value가 5로 고정되어있기 때문에 이렇게는 못함 

	int value1 = 5;
	const int* ptr = &value1;
	value1 = 6; // 이건 됨

	cout << *ptr << endl;

	int value2 = 6;
	ptr = &value2;
	//*ptr = 8 이건 안됨 -> 위에서 const int* ptr이걸로  ptr이 
	// 가르키는 값은 바꿀 수 없음 

	int value3 = 7;
	int* const ptr1 = &value3;

	*ptr1 = 10;
	cout << *ptr1 << endl;

	int value4 = 8;
	//ptr1 = &value4; -> 이게 안됨


	return 0;
}


	