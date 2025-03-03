/*Write a program 
create a class with name Student_Management_System
store student data from roll no 1 to 10
Data includes(Name,RollNo,Percentage)
Display all data with reverse order using array of object.*/
#include<iostream>
using  namespace std;
class Student_Management_System{//class Declaration.
    private:int Rollno;float percentage;string name;//Private member of class.
    public:Student_Management_System(int R,float P,string N){//Parametrized constructor of class.
        Rollno=R;
        percentage=P;
        name=N;
    }
    public:void Display(){//Function of class.
        cout<<"\n RollNo= "<<Rollno<<"\t"<<"Percentage= "<<percentage<<"\t"<<"Name= "<<name;


    }
};
int main()
    {
        Student_Management_System obj[10]= {{101,82.2,"Bhawana"},{102,90.0,"Name"},{103,95.5,"arya"},{104,99.9,"alice"},{105,78.9,"Bhawana"},{106,89.9,"alice"},{23,89.9,"Alice"},{7,90.8,"Sharma"},{2,87.7,"Bhawana"},{3,89.7,"Arya"}}; //array of object with manual initialization.
        int i;
        for(i=9;i>=0;i--){
            obj[i].Display();//Calling of display function with array of object.
            
        }
        return 0;

    }
