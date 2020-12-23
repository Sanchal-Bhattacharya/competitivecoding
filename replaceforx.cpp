#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int calculateIndex(int a[],int n,int x,int p)
{
	int min = 100000000, min_p;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			if(abs(p-i)<min)
			{
				min = abs(p-i);
				min_p = i;
			}
		}
	}
	return min_p;
}

void solve()
{
		int N,X,p,k;
		cin >> N >> X >> p >> k;
		int arr[N];
		for(int i=0;i<N;i++)
		cin >> arr[i];
		sort(arr,arr+N);
		int index = calculateIndex(arr,N,X,p);
		int count = 0;
		if(arr[index]!=X)
		{
			arr[k-1] = X;
			sort(arr,arr+N);
			count++;
		}
		if(arr[p-1] == X)
		{
			cout<<count;
			return;
		}
		if(p<k && arr[p-1]<X)
		{
			cout<<-1;
			return;
		}
		if(p>k && arr[p-1]>X)
		{
			cout<<-1;
			return;
		}
		index = calculateIndex(arr,N,X,p) + 1;
		cout<<abs(p-index)+count;
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
		
		
