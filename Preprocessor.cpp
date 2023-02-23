#include <iostream>

using namespace std;
#define MY_NUMBER 333
#define Max(a,b) ((a>b) ? a:b)
#define LIKE_APPLE


int main(){

	cout << MY_NUMBER << endl;
	cout << Max(1,2) << endl;
#ifdef LIKE_APPLE
	cout << "Oragne" << endl;
#endif
#ifdef NO_APPLE
	cout << "APPLE" << endl;
#endif


	return 0;


}