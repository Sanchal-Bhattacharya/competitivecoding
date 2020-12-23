#include <iostream>
#include <iterator> 
#include <unordered_map> 
#include <algorithm>
using namespace std;

int numberofSquares(int x[],int y[],int n,int m)
{
	unordered_map<int, int> m1, m2;
    int ans = 0;
    
    for (int i = 0; i < n; i++) 
    {
		for (int j = i + 1; j < n; j++) 
		{
			m1[abs(x[i] - x[j])]++;
		}
	}
				
	for (int i = 0; i < m; i++) 
    {
		for (int j = i + 1; j < m; j++) 
		{
			m2[abs(y[i] - y[j])]++;
		}
	}
				
	for (auto i = m1.begin();i != m1.end(); i++) 
	{
        if (m2.find(i->first)!= m2.end()) 
        {

            ans = ans + (i->second* m2[i->first]);
        }
    }
    return ans;
}
				
     
    
    

void solve()
{
	int w,h,n,m,k=4;
	cin >> w >> h >> n >> m;
	
	int x[n];
	int y[m+1];
	for(int i=0;i<n;i++)
	cin >> x[i];
	for(int i=0;i<m;i++)
	cin >> y[i];
	y[m] = k;
	sort(y,y+m+1);
	int ans = numberofSquares(x,y,n,m);
	cout<<ans;
	return;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
	
		
