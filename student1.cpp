#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    float cgpa;
};
void print(Student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.cgpa<<" "<<endl;
}
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
    print (s1);
    print (s2);
    print (s3);
}