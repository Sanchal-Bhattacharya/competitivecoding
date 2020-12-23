#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Sum Of Array elements:"<<sum<<endl;
    return 0;
}
