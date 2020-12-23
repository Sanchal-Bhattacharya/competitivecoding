#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,largest,smallest;
	
	largest=INT_MIN;
	smallest=INT_MAX;
	
	cout<<"Enter the array size"<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the array elements:"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	//Finding largest and smallest
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
			largest=arr[i];
		if(arr[i]<smallest)
			smallest=arr[i];
	}
	cout<<"Largest Element:"<<largest<<endl;
	cout<<"Smallest Element:"<<smallest<<endl;
	return 0;
}