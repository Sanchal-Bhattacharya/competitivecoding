#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,s,p,v,ans = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> s >> p >> v;
		int tmp = floor(p/(s+1))*v;
		ans = max(ans,tmp);
	}
	cout<<ans;
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
