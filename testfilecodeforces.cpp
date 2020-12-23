#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			{
				cin>>x;
				if(x==1)
				{
					cout << (abs(i-2)+abs(j-2))<<"\n";

				}
			}

	}
	return 0;
}

