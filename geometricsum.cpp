#include<iostream>
#include<cmath>
using namespace std;

double gsum(int k)
{
    if(k==0)
        return 1;
    double smallAns = gsum(k-1)+(1/pow(2,k));
    return smallAns;
}
int main()
{
    int k;
    cout<<"Enter total power:"<<endl;
    cin >> k;
    double ans = gsum(k);
    cout<<"The geometric sum="<<ans<<endl;
    return 0;
}
