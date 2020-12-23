#include<iostream>
using namespace std;

int partition(int arr[],int l,int h)
{
	int pivot = arr[l];
	int i = l;
	int j = h;
	
	while(i<j)
	{
		while(arr[i]<=pivot)
		i++;
		
		while(arr[j]>pivot)
		j--;
		
		if(i<j)
		swap(arr[i],arr[j]);
	}
	
	swap(arr[l],arr[j]);
	return j;
}

void quicksort(int arr[],int l,int h)
{
	int j;
	if(l<h)
	{
		j = partition(arr,l,h);
		quicksort(arr,l,j-1);
		quicksort(arr,j+1,h);
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin >> n;
	
	int arr[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	cin >> arr[i];
		
	quicksort(arr,0,n-1);
	
	cout<<"Output:"<<"\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
