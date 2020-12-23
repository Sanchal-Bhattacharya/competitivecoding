#include<iostream>
using namespace std;
int pow(int x,int n)
{
    if(n==0)
        return 1;
    int smallAns=pow(x,n-1 );
    return x*smallAns;
}
int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);
    return ans1+ans2;

}
int main()
{
    int n,x;
    cout<<"Enter the step number: and power:"<<endl;
    cin >> x;
    cin >> n;
    //int ans=fibo(n);
    //cout<<"Fibonacci Sum="<<ans<<endl;
    int ans1=pow(x,n);
    cout<<"Power="<<ans1<<endl;
    return 0;
}
