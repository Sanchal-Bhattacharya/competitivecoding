#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int g;
	cin >> g;
	while(g--)
	{
		int i,n,q,ans;
		cin >> i >> n >> q;
		ans = n/2;
		if(i==1 && q==1)
		cout<<ans;
		if(i==1 && q==2)
		cout<<n-ans;
		if(i==2 && q==1)
		cout<<n-ans;
		if(i==2 && q==2)
		cout<<ans;
		cout<<"\n";
	}
	return;
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
