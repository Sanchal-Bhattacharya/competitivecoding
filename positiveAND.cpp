#include<iostream>
#include<algorithm>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	    if(N==1)
        cout<<1;
        else if(N==3)
        cout<<1<<" "<<3<<" "<<2<<" ";
        else if(N==5)
        cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<" ";
        else if((N!=0) && ((N & (N-1)) == 0))
        cout<<-1;
        else
        {
            cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<" ";
            int i=6;
            while(i<=N)
            {
                if((i!=0) && ((i & (i-1)) == 0))
                {
                    cout<<i+1<<" "<<i<<" ";
                    i+=2;
                }
                else
                {
                    cout<<i<<" ";
                    i++;
                }
            }
            
        }
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
