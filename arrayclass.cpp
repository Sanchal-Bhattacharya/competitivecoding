#include<iostream>
#include "dynamicarrayclass.cpp"
using namespace std;
int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
    ///cout<<d1.getData(3);
    ///cout<<"\n"<<d1.getCapacity();
    DynamicArray d2(d1);
    d2.replacement(155,2);
    d2.print();
    return 0;
}
