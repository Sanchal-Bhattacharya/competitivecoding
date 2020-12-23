#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
class Sorting
{
public:
    void sel_sort(int arr[],int n)
    {
        for(int i=0;i<=n-2;i++)
        {
            int smallest=i;
            for(int j=i+1;j<=n-1;j++)
            {
                if(arr[j]<arr[smallest])
                    smallest=j;
            }
            swap(arr[i],arr[smallest]);
        }
    }

    void bubble_sort(int arr[],int n)
    {
        bool flag=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                {
                    flag=1;
                    swap(arr[j],arr[j+1]);
                }
            if(flag==0)
                break;
        }
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
    Sorting s1;
    //s1.sel_sort(arr,n);
    s1.bubble_sort(arr,n);
    //sort(arr,arr+n);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        return 0;
}
