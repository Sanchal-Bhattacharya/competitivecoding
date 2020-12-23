#include<iostream>
#include<cstring>
using namespace std;
/*int convertStringToInt(char str[],int n)
{
    if(n==0){
        return 0;
    }
    int smallAns=convertStringToInt(str,n-1);
    int ld = str[n-1] - '0';
    int ans = smallAns*10 + ld;
    return ans;

}*/
int main()
{
    char str[10];
    cout<<"Input String:";
    cin >> str;
    int n=strlen(str);
    int ans = convertStringToInt(str,n);
    cout<<"Output:"<<ans<<endl;
    return 0;
}
