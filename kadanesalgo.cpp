#include <iostream>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin >> arr[i];
	ll max_curr = arr[0];
	ll max_global = arr[0];
	for(int i=1;i<n;i++)
	{
		max_curr = max(arr[i],max_curr+arr[i]);
		max_global = max(max_global,max_curr);
	}
	cout<<max_global;
	return 0;
}
