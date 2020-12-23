#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter the string:";
    cin >> str;
    /*for(int i=0;i<strlen(str);i++)
    {
        for(int j=0;j<=i;j++)
            cout<<str[j];
        cout<<"\n";
    }*/
    //print all suffix
    for(int e=strlen(str);e>=0;e--)
    {
        for(int s=e;s<=strlen(str);s++)
            cout<<str[s];
        cout<<"\n";
    }
    return 0;
}
