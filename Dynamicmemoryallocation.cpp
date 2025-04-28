/*Program:- Dynamic Memory allocation
using new and delete keyword*/
#include<iostream>
using namespace std;
class Student{
    public:int marks; string Sname;    
    public:void Display(){
        cout<<"\n Marks= "<<marks;
        cout<<"\n Name= "<<Sname;
    }
};
int main(){
    Student *obj=new Student();//Syntax class name *pointer name=new class name();
    //Ensure to allocate memory to object at run time.
    obj->marks=555;
    obj->Sname="User1";//accessing and allocating value to member calss using pointer to object.
    obj->Display();
    delete obj;//Deleting object to ensures that the memory of object is deallocated after program execution
    obj->Display();//Accessing member function after deleting object will give error.
    return 0;
}