#include <iostream>
#include <cstring>
using namespace std;
const int S = 1e3;
void solve()
{
	char str[S];
	cin >> str;
	int lh[26],rh[26];
	memset(lh,0,sizeof(lh));
	memset(rh,0,sizeof(rh));
	int len = strlen(str);
	for(int i=0;i<len/2;i++)
	lh[str[i]-'a']++;
	if(len%2==0)
	{
		for(int i=len/2;i<len;i++)
		rh[str[i]-'a']++;
	}
	else
	{
		for(int i=len/2+1;i<len;i++)
		rh[str[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(lh[i]!=rh[i])
		{
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
	
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
