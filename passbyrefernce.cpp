#include<iostream>
using namespace std;
void add(int &a,int &b)
{
    a=a*2;
    b=b/2;
}
int main()
{
    int i=5;
    int j=i;
    int &k=i;
    cout<<--i<<endl<<j<<endl<<k<<endl;
    int a,b;
    a=10;
    b=12;
    add(a,b);
    cout<<a<<" "<<b;
    return 0;
}
