#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string par;
	cin >> par;
	int count = 0,cnt = 0;
	int top = 0;
	for(int i=0;i<(int)par.size();i++)
	{
		if(par[i]=='<')
		top++;
		else      
		{
			top--;
			if(top<0) break;
			count++;
			if(top == 0)
			cnt = count;
		}
	}
	cout<<2*cnt;
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
