#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long int sum=0,input;
	long long int n;
	cin >> n;
	long long int tot = (n*(n+1))/2;
	
	for(long long int i=1;i<=n-1;i++)
	{
		cin >> input;
		sum = sum + input;
	}
	cout<<tot-sum;
	return 0;
}
