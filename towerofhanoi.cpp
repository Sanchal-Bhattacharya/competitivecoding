#include<iostream>
#include<cmath>
using namespace std;


void TOH(int n,char a,char b,char c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"Moving disk "<<n<<" from "<<a<<" to "<<b<<"\n";
        TOH(n-1,b,a,c);
    }
}

int main()
{
    int n;
    char ch[]={'A','B','C'};
    cout<<"Enter the number of steps:";
    cin >> n;
    cout<<"Total number of steps:"<<pow(2,n)-1<<"\n";
    TOH(n,ch[0],ch[1],ch[2]);

}
