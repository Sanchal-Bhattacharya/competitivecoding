#include<iostream>
using namespace std;
class Recursion
{
public:
    int fact(int n)
    {
        if(n<0)
            return -1;
        if(n==0)
            return 1;
        return n*fact(n-1);
    }
};

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin >> num;
    Recursion r;
    int ans=r.fact(num);
    cout<<"The factorial=:"<<ans;
    return 0;
}
