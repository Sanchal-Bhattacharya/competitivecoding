#include<iostream>
using namespace std;

int rotatedsearch(int arr[],int n,int key)
{
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int mid = (s+e)/2;
		
		if(arr[mid]==key){
			
		return mid;
	}
		
		if(arr[mid]<arr[e])
		{
			if(key>=arr[mid] && key<=arr[e])
			s=mid+1;
			else
			e=mid-1;
		}
		
		else
		{
			if(key>=arr[s] && key<=arr[mid])
			e=mid-1;
			else
			s=mid+1;
			
		}
	}
		
	return -1;
}

int main()
{
	int n,key;
	cout<<"Enter array size:";
	cin >> n;
	
	cout<<"Enter the key:";
	cin >> key;
	
	int arr[n];
	
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	cin >> arr[i];
	
	
	
	
	int index = rotatedsearch(arr,n,key);
	
	cout<<"\nResult Index: "<<index<<"\n";
	
	return 0;
}
	
	
