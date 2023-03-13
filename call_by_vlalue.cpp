#include <iostream>
#include <stdlib.h>

using namespace std;
int foo(int x, int y);
int foo(int x, int y)
{
	return x + y;
}


int main(void)
{
	int x = 1;
	int y = 2;
	cout << foo(x, y) << endl;
	return 0;
}