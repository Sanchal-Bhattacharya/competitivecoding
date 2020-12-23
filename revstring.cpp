#include<iostream>
#include<cstring>
using namespace std;

/*int len(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        count++;
    return count;
}*/

void rev(char str[])
{
    int s,e;
    s=0;
    e=strlen(str)-1;  //using inbuilt strlen() function
    while(s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
    cout<<"\nReversed String="<<str<<endl;
}


int main()
{
    char str[100];
    cout<<"Enter the string:";
    cin >> str;
    cout<<"\nOriginal String:"<<str;
    rev(str);
    return 0;
}
