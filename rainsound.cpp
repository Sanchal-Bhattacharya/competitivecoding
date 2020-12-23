#include <bits/stdc++.h>
using namespace std;
void solve()
{
	long long l,r,s;
	cin >> l >> r >> s;
	long long mincloud = ceil((double)l/(double)s);
	long long maxcloud = floor((double)r/double(s));
	if(mincloud<=maxcloud)
	cout<<mincloud<<" "<<maxcloud;
	else
	cout<<-1<<" "<<-1; 
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
