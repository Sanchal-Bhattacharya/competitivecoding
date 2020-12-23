#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
char shots[2*N];
void solve()
{
	int n;
	cin >> n;
	cin >> shots;
	int currscore[] = {0,0};
	int rem[] = {n,n};
	int ans = 2*n;
	for(int i=0;i<2*n;i++)
	{
		int currteam = i%2;
		if(shots[i]=='1')
		currscore[currteam]++;
		rem[currteam]--;
		//score diff >remshots
		int scorediff = currscore[currteam] - currscore[currteam^1];
		int remshots = rem[currteam^1];
		if(scorediff>remshots)
		{
			ans = i+1;
			break;
		}
		scorediff = currscore[currteam^1] - currscore[currteam];
		remshots = rem[currteam];
		if(scorediff>remshots)
		{
			ans = i+1;
			break;
		}
		
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
		
