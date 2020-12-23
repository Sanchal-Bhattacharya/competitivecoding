#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int arr[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	cin >> arr[i];
	sort(arr,arr+n);
	long long ans = 0;
	for(int i=0;i<n;i++)
	{
		ans = max(ans,(n-i)*1LL*arr[i]);
	}
	cout<<ans<<endl;
	return 0;
}

		
