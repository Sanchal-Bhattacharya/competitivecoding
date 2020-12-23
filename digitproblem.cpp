#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string x;
	int k;
	cin >> x >> k;
	for(int i=0;i<(long long)x.length() && k>0;i++)
	{
		if(x[i]!='9')
		{
			x[i] = '9';
			k--;
		}
	}
	cout<<x<<"\n";
	return 0;
}
	
