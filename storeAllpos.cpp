#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void storeAllPos(int arr[],int n,int x,vector<int> &ans)
{
    if(n==-1)
        return;
    if(arr[n-1]==x)
        ans.push_back(n-1);
    storeAllPos(arr,n-1,x,ans);
}

int main()
{
    int arr[]={4,4,3,6,2,4,8};
    vector<int> ans;
    storeAllPos(arr,7,4,ans);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}
