#include<iostream>
#include<cstdlib>
using namespace std;
    int main()
    {
        long int N;
        cin >> N;
        long int a[N];
        int c=0,b=0,i;
        for(i=0;i<N;i++)
        cin >> a[i];
        for(i=0;i<N/2;i++)
        {
            if(a[i]>=100000)
            a[i]=a[i]/100000;
            else if(a[i]>=10000)
            a[i]=a[i]/10000;
            else if(a[i]>=1000)
            a[i]=a[i]/1000;
            else if(a[i]>=100)
            a[i]=a[i]/100;
            else if(a[i]>=10)
            a[i]=a[i]/10;
            else
            a[i]=a[i];
            if(i%2==0)
            c+=a[i];
            else
            b+=a[i];
        }
 
        for(i=N/2;i<N;i++)
        {
            if(i%2==0)
            c+=(a[i]%10);
            else
            b+=(a[i]%10);
        }
        if(abs(c-b)==0||abs(c-b)==11)
        cout<<"OUI";
        else
        cout<<"NON";
        return 0;
    }
