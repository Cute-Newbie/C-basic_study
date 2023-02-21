#include <iostream>

//simple function that adds two integers
int adder(int a, int b);
int adder(int a, int b) {
	int res;
	res = a + b;
	return res;
}
//function ends here 

//simple function that multiplies two integers
int multiplier(int a, int b);
int multiplier(int a, int b) {

	int res;
	res = a * b;
	return res;
}
//function ends here

//simple function that prints Hello world while returning nothing
void Helloworld();
void Helloworld() {

	std::cout << "Hello World" << std::endl;
	return;

}
//function ends here



//main function 
int main(void)
{
	using namespace std;
	cout<<1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	cout << adder(4, 5) << endl;
	cout << adder(8, 13) << endl;
	cout << multiplier(8, 13) << endl;
	Helloworld();
	
	return 0;
}