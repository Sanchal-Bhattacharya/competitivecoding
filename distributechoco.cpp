#include <bits/stdc++.h>
using namespace std;
void solve()
{
	long long c,n,diff=0;
	cin >> c >> n;
	if(n*(n+1)/2 > c)
	cout<<c;
	else{
			for(int i=1;(((n+i-1)*(n+i)/2)-(i*(i-1)/2))<=c;i++)
			{
				diff = ((n+i-1)*(n+i)/2)-(i*(i-1)/2);
			}
			cout<<c - diff;
		}
}
	
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
