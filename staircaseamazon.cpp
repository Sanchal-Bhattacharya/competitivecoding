#include<iostream>
using namespace std;
long countways(int n)
{
    long sol; 
    if(n==1||n==0)
        return 1;
    if(n>=0)
    	sol=countways(n-1)+countways(n-2);
    
    return sol;
    
}

int main()
{
    int n;
    cout<<"Enter no of steps:";
    cin >> n;
    long ans = countways(n);
    cout<<"Total ways:"<<ans<<endl;
    return 0;
}
