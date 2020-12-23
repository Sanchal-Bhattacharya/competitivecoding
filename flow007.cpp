#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
const int N = 1e6;
void solve()
{
	ll ans = 0;
	char num[N];
	cin >> num;
	for(int i=strlen(num)-1;i>=0;i--)
	ans = ans*10 + (num[i]-'0');
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
