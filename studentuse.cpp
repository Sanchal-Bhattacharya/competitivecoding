#include<iostream>
#include "student.cpp"
using namespace std;
int main()
{
    Student s1(10,100);
    Student s2(s1);/// built in copy cocntructor
    Student *s3=new Student(5,6);
    *s3=s2;
    //cout<<s1.age<<s1.rollno<<endl;
    //cout<<s2.age<<s2.rollno<<endl;
    delete s3;
    return 0;
}
