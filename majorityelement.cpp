#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void majority_element(int arr[],int n)
{
	int freq[100],temp[100];
	
	memset(freq,0,sizeof(freq));
	
	for(int i=0;i<n;i++)
	freq[arr[i]]++;
	
	memcpy(temp,freq,sizeof(freq));
	
	sort(temp,temp+100);
	
	for(int i=0;i<100;i++)
	{
		if(freq[i] == temp[99])
		cout<<"Major Element="<<i;
	}
	 

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
