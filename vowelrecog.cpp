#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string str;
	cin >> str;
	long long n = (int)str.length();
	long long sum = 0;
	vector<long long> vec;
	for(long long i=0;i<n;i++)
	{
		if(i==0)
		vec.push_back(n);
		else
		vec.push_back((n-i) + vec[i-1] - i);
	}
	for(long long j=0;j<n;j++)
	{
		if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
		sum += vec[j];
	}
	cout<<sum;
}
		
	
	
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
