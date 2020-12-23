#include<bits/stdc++.h>
using namespace std;
 
long int min_cost(int n,int k,int *a){
	long int cost = 0;
	deque<int> negative_indices;
	vector<int> postive_indices;
	//indexes of negative value
	for(int i=0;i<n;i++)
		if(a[i]<0)
			negative_indices.push_back(i);
		else
			postive_indices.push_back(i);
	int neg_size = negative_indices.size();
	int pos_size = negative_indices.size();
	if(pos_size==0||neg_size==0){
		for(int i=0;i<n;i++)
			cost+=abs(a[i]);
		return cost;
	}
	for(int i:postive_indices){
		for(int j:negative_indices){
			if(a[i]<=0||i+k<j)
				break;
			if(a[j]>=0 || abs(i-j)>k){
				if(a[j]>=0)
					negative_indices.pop_front();
				continue;
			}
			int sub = min(a[i],-a[j]);
			a[i] -= sub;
			a[j] += sub; 
		}
	}
	for(int i=0;i<n;i++)
		cost+=abs(a[i]);
	return cost;
}
 
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<min_cost(n, k, a)<<'\n';
	return 0;
}
