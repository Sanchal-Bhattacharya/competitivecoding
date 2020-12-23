#include<iostream>
using namespace std;
int count_zero(int n)
{
    if(n==0)
        return 0;
    int smallAns=count_zero(n/10);
    if(n%10==0)
        return 1+smallAns;
    return smallAns;
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin >> n;
    cout<<"No of zeroes:"<<count_zero(n)<<endl;

    return 0;
}
