#include <iostream>
#define ll long long
using namespace std;

void solve()
{
	ll y,x;
	cin >> y >> x;
	if(y>x)
	{
		if(y%2==0)
		cout<<y*y-x+1;
		else
		cout<<(y-1)*(y-1)+x;
	}
	else if(y<x)
	{
		if(x%2!=0)
		cout<<x*x-y+1;
		else
		cout<<(x-1)*(x-1)+y;
	}
	else
	cout<<x*y - (x-1);
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
