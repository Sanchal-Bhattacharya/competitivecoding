#include <iostream>
using namespace std;
int main()
{
	int x = 3;
	int &ref = x;
	cout<<ref<<endl;
	x = 100;
	cout<<ref<<endl;
	return 0;
}
