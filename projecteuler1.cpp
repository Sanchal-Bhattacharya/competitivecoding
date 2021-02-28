#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		if(i%3==0)
		{
			sum+=i;
			continue;
		}
		if(i%5==0) 
		{
			sum+=i;
			continue;
		}
	}
	cout<<sum;
	return 0;
}
		
