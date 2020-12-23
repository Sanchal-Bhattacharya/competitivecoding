#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int ans = 0;
	int s,tmp = INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		tmp = min(tmp,s);
		ans += tmp;
	}
	cout<<ans;
}
		
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
