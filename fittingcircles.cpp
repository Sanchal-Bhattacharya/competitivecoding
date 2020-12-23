#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b,r,ans;
	cin >> a >> b;
	r = min(a,b);
	ans = max(a,b)/r;
	cout<<ans;
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
