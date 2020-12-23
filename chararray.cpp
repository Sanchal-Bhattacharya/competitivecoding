#include<iostream>
using namespace std;

int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
        count++;
    return count;
}
void rev(char input[])
{
    int s=0;
    int e=length(input)-1;
    while(s<e)
    {
        swap(input[s],input[e]);
        s++;
        e--;
    }

}
int main()
{
    char name[20];
    cout<<"Enter the name:"<<endl;
    cin.getline(name,20);
    cout<<"Name:"<<name<<endl;
    cout<<"Length:"<<length(name)<<endl;
    rev(name);
    cout<<"Reversed array:"<<name<<endl;
    rev(name);
    return 0;
}
