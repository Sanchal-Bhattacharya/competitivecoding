#include<iostream>
using namespace std;
class Student
{
public:
    int age;
    int rollno;

    Student(int age,int rollno)
    {
        this->age=age;
        this->rollno=rollno;
        this->rollno=rollno;
    }
    ~Student()
    {
        cout<<"Destructor is called\n";
    }
};

