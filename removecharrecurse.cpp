#include<iostream>
using namespace std;

void removeA(char st[])
{
    if(st[0]=='\0')
        return;

    if(st[0]!='a')
        removeA(st+1);
    else{
        for(int i=0;st[i]!='\0';i++)
            st[i]=st[i+1];
     removeA(st);
    }
}

void removeDuplicates(char input[])
{
    if(input[0]=='\0')
        return;
    if(input[0]==input[1]){
        for(int i=0;input[i]!='\0';i++)
            input[i]=input[i+1];
        removeDuplicates(input);
    }
    else
        removeDuplicates(input+1);
}


int main()
{
    char st[50];
    cout<<"Input string:";
    cin >> st;

    //removeA(st);
    removeDuplicates(st);
    cout<<"Output String:"<<st<<endl;

    return 0;
}
