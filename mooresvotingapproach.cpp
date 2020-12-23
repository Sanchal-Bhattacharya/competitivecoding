#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void majority_element(int arr[],int n)
{
	int cand = arr[0];
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==cand)
		count++;
		else
		count--;
		
		if(count==0)
		{
			cand=arr[i];
			count=1;
		}
	}
	int count2=0;
	
	for(int i=0;i<n;i++)
	if(arr[i]==cand)
	count2++;
	
	cout<<"Majority element="<<cand<<endl;
	cout<<"Count="<<count2<<endl;
	

} 
int main()
{
	int n;
	cout<<"Enter array size:";
	cin >> n;
	
	int arr[n];
	
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	cin >> arr[i];
	
	majority_element(arr,n);
	return 0;
}

