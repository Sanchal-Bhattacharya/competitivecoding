#include<iostream>
using namespace std;

int sum_of_digit(int n)
{
    if(n==0)
        return 0;
    int smallAns2 = sum_of_digit(n/10);
    int smallAns = n%10;
    return smallAns+smallAns2;
 }
int counting(int n)
{
    if(n==0)
        return 0;
    int smallAns=1+counting(n/10);
    return smallAns;
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin >> n;
    //cout<<"No of digits:"<<counting(n)<<endl;
    cout<<"Sum of digits:"<<sum_of_digit(n)<<endl;
    return 0;
}
