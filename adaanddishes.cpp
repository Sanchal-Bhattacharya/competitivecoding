#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int c[n];
	for(int i=0;i<n;i++)
	cin >> c[i];
	sort(c,c+n);
	int b1 = 0,b2 = 0;
	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1)
		b1 += c[i];
		else
		{
			if(b1<b2)
			b1 += c[i];
			else
			b2 += c[i];
		}
	}
	cout<<max(b1,b2);
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
