#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string str1;
	cin >> str1;
	sort(str1.begin(),str1.end());
	if(str1[0] == str1[str1.size()-1])
	cout<<-1;
	else
	{
		cout<<str1;
	}
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
