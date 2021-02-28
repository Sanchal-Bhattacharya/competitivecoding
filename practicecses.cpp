#include <bits/stdc++.h>
using namespace std;

void nearestElement()
{
	int x;
	cin >> x;
	vector<int> v;
	v = {2,5,6,7,8,11,13,15};
	auto it = lower_bound(v.begin(),v.end(),x);
	if(it == v.begin())
	cout<<*it;
	else if(it == v.end())
	{
		it--;
		cout<<*it;
	}
	else
	{
		int a = *it;
		it--;
		int b = *it;
		if(x-b<a-x)
		cout<<b;
		else
		cout<<a;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bitset<50> b;
	int j = 0;
	while(n!=0)
	{
		b[j] = n%2;
		n = n/2;
		j++;
	}
	
	for(int i=j-1;i>=0;i--)
	cout<<b[i];
	cout<<endl;
	
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(8);
	for(auto x:v)
	cout<<x;
	cout<<endl;
	string a = "I am Sanchal";
	cout<<a.substr(2,4);
	cout<<a.find("San");
	set<int> s = {5,4,3,2,1};
	for(auto p:s)
	cout<<p;
	map<string,int> mp;
	mp["sanchal"] = 155;
	mp["sambit"] = 153;
	cout<<mp["sambit"];
	cout<<mp.count("sancha");
	cout<<endl;
	nearestElement();
	return 0;
}
