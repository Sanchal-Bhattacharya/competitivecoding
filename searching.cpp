#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;
class Searching
{
public:
    void linear_search(int arr[],int n,int k)
    {
        int i;
        for(i=0;i<n;i++)
            if(arr[i]==k){
            cout<<"Match Found at index: "<<i<<endl;
            break;
            }
        if(i==n)
            cout<<"Match not found"<<endl;
    }
    int bin_search(int arr[],int n,int k)
    {
        int mid,s=0,e=n-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(arr[mid]==k)
                return mid;
            else if(arr[mid]>k)
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
};
int main()
{
    int n;
    cout<<"Enter the array size:"<<endl;
    cin >> n;
    int arr[n];
    //cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
        arr[i]=rand()%100;

    ///sort the array
    sort(arr,arr+n);
    /*cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
        cout << arr[i]<<" ";*/
    ///searching proccess starts
    int k;
    cout<<"\nEnter the key/number to be searched:";
    cin >> k;
    clock_t t;
    t=clock();
    Searching s1;
    int p=s1.bin_search(arr,n,k);
    if(p==-1)
        cout<<"Match not found"<<endl;
    else
        cout<<"Match found at index:"<<p<<endl;
    t=clock()-t;
    double time_taken=(double)t/CLOCKS_PER_SEC;
    cout<<"Time taken="<<time_taken;
        return 0;
}
