#include<iostream>
#include<cstring>
using namespace std;
void recursion(char str[],int n)
{
    if(n==0)
    return;
    recursion(str,n-1);
    cout<<str<<" "<<n-1<<endl;


}

int main(){
    char str[]="1234";
    int n=strlen(str);
	recursion(str,n);
	return 0;
}
