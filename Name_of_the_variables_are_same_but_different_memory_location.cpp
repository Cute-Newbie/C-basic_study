#include <iostream>
 
int main(void)
{
	using namespace std;
	
	int x = 1;
	std::cout << x << endl;
	std::cout << &x << endl;
	{
		int x = 1; // The memory is different 
		std::cout << x << endl;
		std::cout << &x << endl;
	}
	{
		int x = 2;
		std::cout << x << endl;
		std::cout << &x << endl;

	}
	
	
	return 0;
}