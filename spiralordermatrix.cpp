#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the rows and columns respectively:"<<endl;
    cin >> r >> c;
    int arr[r][c];
    cout<<"Enter the array elements:"<<"\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cin >> arr[i][j];
    ///print matrix
    cout<<"Output matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    ///spiral order traversal
    int sr,sc,er,ec;
    sr=0;
    sc=0;
    er=r-1;
    ec=c-1;

    while(sr<=er && sc<=ec)
    {
        ///printing sr
        for(int i=sc;i<=ec;++i)
            cout<<arr[sr][i]<<" ";
            sr++;
        ///printing ec
        for(int i=sr;i<=er;++i)
            cout<<arr[i][ec]<<" ";
            ec--;
        ///printing  er
        for(int i=ec;i>=sc;--i)
            cout<<arr[er][i]<<" ";
            er--;
        ///printing sc
        for(int i=er;i>=sr;--i)
            cout<<arr[i][sc]<<" ";
            sc++;
    }

    return 0;
}
