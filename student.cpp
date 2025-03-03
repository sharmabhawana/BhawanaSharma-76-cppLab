#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    float cgpa;
};
int main(){
    Student s1;
    s1.name="Bhawana Sharma";
    s1.rollno=76;
    s1.cgpa=8.2;
    Student s2;
    s2.name="bhawana";
    s2.rollno=2;
    s2.cgpa=9.1;
    Student s3;
    s3.name="sharma";
    s3.rollno=3;
    s3.cgpa=8.5;
    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rollno<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rollno<<endl;
    cout<<s3.name<<" "<<s3.cgpa<<" "<<s3.rollno<<endl;
}