#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,q,inp;
	cin >> n >> q;
	long int arr[n+1];
	arr[0]=0;
	//cumulative summation
	for(long int i=1;i<=n;i++)
	{
		cin >> inp;
	    arr[i] = arr[i-1] + inp;
	}
	while(q--)
	{
		long int l,r;
		cin >> l >> r;
		long int median = 0;
		median = (arr[r] - arr[l-1])/(r-l+1);
		cout<<median<<"\n";
	}
	return 0;
}
