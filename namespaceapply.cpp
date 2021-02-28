#include <iostream>
using namespace std;
namespace first
{
	int val = 100;  // variable created inside namespace
}
double value = 3.14;  // global variable
int main()
{
	int val = 500;
	cout << val << endl;
	//cout << ::val << endl;
	cout << first::val << endl;
	return 0;
}  
