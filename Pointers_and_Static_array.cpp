#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
/*사실 Static Array나 그냥 array나 비슷함*/

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
	cout << array << endl; //-> 주소출력
	cout << &array[0] << endl;// 위의 코드와 결과가 같음을 알 수 있음
	printArray(array);// 그냥 포인터의 size가 출력됨 -> array가 들어가는게 아니라
	// array를 가리키는 포인터가 들어감 
	cout << array[0]<<endl;// 함수 안에서도 값이 바뀌어 있음
	return 0;
}