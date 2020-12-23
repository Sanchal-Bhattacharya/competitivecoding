#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    /*v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();*/
    for(int i=0;i<8;i++)
    {
         v.push_back(i+1);
         cout<<"Capacity="<<v.capacity()<<endl;
         cout<<"Element="<<v.at(i)<<endl;

    }
    return 0;

}
