#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[125];
	char inp[101];
	int count=0,sum = 0;
	cin >> inp;
	for(int i=0;i<=26;i++)
	{
		count++;
		arr[i] = count;
	}
	for(int i=0;i<strlen(inp);i++)
	{
		sum = sum + arr[(int)inp[i]-97];
	}
	cout<<sum;
	return 0;
}
	
