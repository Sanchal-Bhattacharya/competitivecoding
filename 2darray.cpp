#include<iostream>
using namespace std;

void printArray(int arr[10][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout << arr[i][j]<<" ";

        cout<<"\n";
    }

}

int main()
{
    int m,n;
    cout<<"Enter the rows and columns:";
    cin >> m >> n;
    int arr[10][10];

    cout<<"Enter the array values:";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    }
    cout<<"Output array:"<<endl;

    printArray(arr,m,n);
    /*for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        }

        cout<<"\n";
    }*/
    return 0;
}
