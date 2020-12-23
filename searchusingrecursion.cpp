#include<iostream>
using namespace std;

int firstIndex(int arr[],int n,int x,int i)
{
    if(i==n)
        return -1;
    if(arr[i]==x)
        return i;
    return firstIndex(arr,n,x,i+1);
}

int lastIndex(int arr[],int n,int x)
{
    if(n==0)
        return -1;
    if(arr[n-1]==x)
        return n-1;
    return lastIndex(arr,n-1,x);
}

int main()
{
    int arr[]={1,2,3,4,5,6,4,8,6};
    //cout<<firstIndex(arr,9,4,0);
    cout<<lastIndex(arr,9,11);
    return 0;
}
