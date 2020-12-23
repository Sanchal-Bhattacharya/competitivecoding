#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int l = str.length();
	int curr = 1;
	int best = 1;
	for(int i=0;i<l-1;i++)
	{
		if(str[i]==str[i+1])
		curr++;
		else
		curr = 1;
		
		best = max(best,curr);
	}
	
	cout<<best;
	return 0;
}
	
