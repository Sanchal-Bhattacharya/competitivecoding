#include<iostream>
using namespace std;

void solve()
{
	long n;
	long k,tot=0;
	int flag = 0;
	cin >> n >> k;
	long Q[n];
	
	for(int i=0;i<n;i++)
		cin >> Q[i];
	for(int i=0;i<n;i++)
	    {
	        Q[i] = Q[i] + tot;
	        if(Q[i]>=k)
	        {
	            tot = Q[i]-k;
	        }
	        else
	        {
	            cout<<i+1;
	            flag=1;
	            break;
	        }
	    }
	    if(flag == 0)
	    {
	        long rem = tot/k + n + 1;
	        cout<<rem;
	    }
	return;
}
		
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
