#include <iostream>

namespace Myspace1
{   
	namespace innerspace
	{
		int dosomething(int a, int b)
		{
			return a - b;
		}



	}

	int dosomething(int a, int b)
	{
		return a + b;
	}



}


int dosomething(int a, int b)
{
	return a * b;
}

using namespace std;

int main() 
{
	cout << Myspace1::innerspace::dosomething(3, 4) << endl;
	cout << Myspace1::dosomething(3, 4) << endl;
	cout << dosomething(3, 4) << endl;
	return 0;

}