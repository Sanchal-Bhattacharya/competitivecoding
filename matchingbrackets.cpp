#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
char brack[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	cin >> brack[i];
	int nestdepth = 0,nestdepthpos = 0,maxsequence = 0,maxsequencepos = 0,count = 0, currmaxsequence=0;
	int top = 0;
	for(int i=0;i<n;i++)
	{
		if(brack[i]=='1')
		top++;
		if(brack[i]=='2')
		top--;
		if(top>nestdepth)
		{
			nestdepth = top;
			nestdepthpos = i+1;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		if(brack[i]=='1')
		top++;
		if(brack[i]=='2')
		{
			top--;
			count++;
			if(top==0)
			{
				maxsequence = max(maxsequence,count);
				count = 0;
			}
		}
		if(maxsequence>currmaxsequence)
		{
			currmaxsequence = maxsequence;
			maxsequencepos = i+2 - 2*currmaxsequence;
		}
	}
			
			
	cout<<nestdepth<<" "<<nestdepthpos<<" "<<2*maxsequence<<" "<<maxsequencepos;
	return 0;
}
