#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int len;
    len=sizeof(a)/sizeof(a[0]);
    cout<<"Length of the array:"<<len<<endl;
    return 0;

}
