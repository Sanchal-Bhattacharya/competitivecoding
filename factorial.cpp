#include <iostream>
#define ll long long
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	ll ans = 0;
	while(n)
	{
		ans += n/5;
		n = n/5;
	}
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
