/*Analyze and design classes for a student management system.*/
#include<iostream>
using namespace std;
class User_Profile
{
    private:string username;int pin;;
    public: void validate(){
        cout<<"\n Enter your username:";
        cin>>username;
        cout<<"\n Enter your pin:";
        cin>>pin;
        if(pin==1234){
            cout<<"\n Pin is  Validated .";
        }
        else{
            cout<<"\n Pin is Invalid ";
        }
    }
    void Display(){
        cout<<"\n Username is "<<username;
        cout<<"\n Welcome ";
    }
};
class Student_Details{
    private:
    int rollno;
    float cgpa;
    string name;
    public: void Student(){
        cout<<"\n  your name:";
        cin>>name;
        cout<<"\n Enter your rollno:";
        cin>>rollno;
        cout<<"\n Enter your cgpa:";
        cin>>cgpa;
        //display();
        
    }
    public:void display(){
    cout <<"\n  The name is: "<<name;
     cout<<"\n  The roll no is:"<<rollno;
     cout<<"\n  The cgpa is:"<<cgpa;
    }
};
   class Attend{
    private:int attendance;
    public: void attendance1(){
        cout<<"\n Enter your attendance:";
        cin>>attendance;
        if(attendance>=75 && attendance<=100){
            cout<<"\n Applicable for exam.";
        }
        else{
            cout<<"\n Not Applicable to sit in the exam.";
        }

    }

};
/*void course_Detail{

}*/
int main(){
    User_Profile obj1;
    obj1.validate();
    obj1.Display();
    Student_Details obj2;
    obj2.Student();
    obj2.display();
    Attend obj3;
    obj3.attendance1();
    return 0;

}