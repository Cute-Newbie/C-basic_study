#include <iostream>
using namespace std;
#define NUM_STUDENTS 1000

void something(int array[20]);
void something(int array[20])
{
	cout << (int)array << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
}


int main(void)
{

	const int num_students = 20;
	int student_scores[num_students] = { 1,2,3,4,5, };
	//cout <<  student_scores << endl;
	cout << (int)&student_scores[0] << endl; /*배열의 0번째 주소와 배열의 주소가 같음*/
	cout << student_scores[1] << endl;
	cout << student_scores[2] << endl;
	cout << student_scores[3] << endl;
	//cout << sizeof(student_scores) << endl;
	something(student_scores);


	return 0;
}