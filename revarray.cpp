#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int s=0,e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"Reversed array elements:"<<endl;
    for(int i=0;i<n;i++)
        cout<<"\t"<<arr[i];
}
