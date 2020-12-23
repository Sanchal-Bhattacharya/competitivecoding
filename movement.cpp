#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int num;
	int count = 0;
	
	cin >> num;
	while(num>0)
	{
		if((num-5)>=0)
		{
			num=num-5;
			count++;
		}
		else if((num-4)>=0)
		{
			num=num-4;
			count++;
		}
		else if((num-3)>=0)
		{
			num=num-3;
			count++;
		}
		else if((num-2)>=0)
		{
			num=num-2;
			count++;
		}
		else if((num-1)>=0)
		{
			num = num-1;
			count++;
		}
	}
	cout<<count;
	return 0;
}
			
