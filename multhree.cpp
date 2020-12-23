#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll k,d0,d1;
	cin >> k >> d0 >> d1;
	ll s = d0+d1;
	ll tot = s + s%10;
	ll c = (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;
	ll cycle_count = (k-3)/4;
	ll left_over = (k-3) - cycle_count*4;
	tot = tot + c*cycle_count*1LL;
	for(int p=2,i=0;i<left_over;i++)
	{
		tot += (ll)(p*s)%10;
		p*=2;
	}
	if(tot%3==0)
	cout<<"YES";
	else
	cout<<"NO";
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
