#include <iostream>
using namespace std;
#define NUM_STUDENTS 1000

int main(void)
{	
	int scores[] = { 84,92,76,81,56 };
	const int num_students = sizeof(scores) / sizeof(int);
	int total_score = 0;
	double average;

	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
	}
	average = total_score / num_students;
	std::cout << average << std::endl;


	return 0;
}