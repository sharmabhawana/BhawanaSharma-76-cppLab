#include<iostream>
using namespace std;
class Student_management_system{
    private:
    int rollno;
    float cgpa;
    string name;
    public: void Student(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your rollno:";
        cin>>rollno;
        cout<<"Enter your cgpa:";
        cin>>cgpa;
        display();
        
    }
    public:void display(){
    cout <<"\n  The name is: "<<name;
     cout<<"\n  The roll no is:"<<rollno;
     cout<<"\n  The cgpa is:"<<cgpa;
    }
};
int main(){
    Student_management_system obj;
    obj.Student();
    return 0;
}
