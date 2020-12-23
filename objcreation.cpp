#include<iostream>
using namespace std;
int main()
 {
     //Creating objects staitically
     Student s1;
     s1.age=26;
     s1.rollno=155;
     //Creating objects dynamically
     Student *s2=new Student;
     s2->age=55;
     s2->rollno=101;
     cout<<s2->age<<endl;
     cout<<s2->rollno<<endl;
     return 0;
 }
