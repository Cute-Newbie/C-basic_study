#include <iostream>
using namespace std;
#define NUM_STUDENTS 1000

using namespace std;

int main(void)
{
	const int row = 3;
	const int col = 5;
	int array[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			std::cout << array[i][j] << " ";
			
		}
		std::cout<<endl;
	}



	return 0;
}