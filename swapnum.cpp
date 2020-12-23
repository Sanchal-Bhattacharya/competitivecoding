#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the two nos:"<<endl;
	cin >> a >> b;
	cout<<"Before swapping:"<<endl;
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	//Using third variable
	/*int temp;
	temp=a;
	a=b;
	b=temp;*/
	/*a=a^b;
	b=a^b;
	a=a^b;*/
	swap(a,b);
	cout<<"After swapping:"<<endl;
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	return 0;
}
