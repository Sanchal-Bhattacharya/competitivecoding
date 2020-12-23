#include<iostream>
#include<ctime>
using namespace std;

void merge(int arr[],int s,int mid,int e)
{
	int temp[100]; // temp array
	
	int i = s;
	int j = mid+1;
	int k = 0; 
	
	while(i<=mid && j<=e )
	{
		if(arr[i]<arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
			
		}
		else
		{	
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	
	while(i<=mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}
	while(j<=e)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}
	
	for(int p=s;p<=e;p++)
	arr[p] = temp[p-s];
}

void mergeSort(int arr[],int s,int e)
{
	
	if(s<e)
	{
		int mid = (s + e)/2;
		
		mergeSort(arr,s,mid);
		
		mergeSort(arr,mid+1,e);
		
		merge(arr,s,mid,e);
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
		
	clock_t start,end;
	start = clock();	
	
	mergeSort(arr,0,n-1);
	
	end = clock();
	
	cout<<"Output:"<<"\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	double timetaken = (double)(end-start)/CLOCKS_PER_SEC;
	cout<<"\nTime taken="<<timetaken;
	return 0;
}
