#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n;
	cin >> n;
	long int arr[n];
	for(long int i=0;i<n;i++)
		cin >> arr[i];
	
	if(arr[n-1]%10==0)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}
		
