#include<iostream>
using namespace std;
class DynamicArray
{
    int *data;
    int capacity;
    int nextIndex;

public:
        DynamicArray()
        {
            data=new int[5];
            nextIndex=0;
            capacity=5;
        }
        void add(int num)
        {
            if(capacity==nextIndex)
            {
                int *tempData=new int[2*capacity];
                ///copy the old content
                for(int i=0;i<capacity;i++)
                    tempData[i]=data[i];
                ///delete remaining data;
                delete []data;
                data=tempData;
                capacity*=2;

            }
            data[nextIndex]=num;
            nextIndex++;
        }
        int getData(int i)
        {
            if(i>=0 && i<nextIndex)
                return data[i];
            else
                return -1;
        }
        void replacement(int num,int i)
        {
            if(i<nextIndex)
                data[i]=num;
            else if(i==nextIndex)
                add(num);
            else
                cout<<"Error encountered";
        }
        void print()
        {
            for(int i=0;i<nextIndex;i++)
                cout<<data[i]<<" ";
            cout<<"\n";
        }
        int getCapacity()
        {
            return capacity;
        }

};
