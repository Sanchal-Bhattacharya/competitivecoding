#include <iostream>
#include <climits>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int currspeed;
	int maxspeed = 0;
	int prevspeed = INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin >> currspeed;
		if(prevspeed>=currspeed)
		{
			maxspeed++;
			prevspeed = currspeed;
		}
		
	}
	cout<<maxspeed;
	return;
}
	 
		
int main()
{
	ios::sync_with_stdio(false);
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
