#include<iostream>
using namespace std;
int main()
{
    long d;
    long r,x;
    long toffee=0;
    cin >> d;
    while(d--)
    {
        cin >> r >> x;
        if((x*100)>=(2*22*r/7))
        toffee++;
    }
    cout<<toffee;
    return 0;
}
