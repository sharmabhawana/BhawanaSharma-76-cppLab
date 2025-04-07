/*Multiple Inhertiance,
In this we cannot access member of any parent class in other parent classes,as there no relationship between parent classes in Multiple Inhertiance
Here,a child class can extend multiple parent classes */
//Example Multiple Inheritance.
#include<iostream>
using namespace std;
class Parent1{
    public:Parent1(){
        cout<<"\n Parent 1 class constructor";
    }
    public:void Fun1(){
        cout<<"\n Parent 1 Class Function";
    }
};
class Parent2{
    public:Parent2(){
        cout<<"\n Parent 2 class constructor";
    }
    public:void Fun2(){
        cout<<"\n Parent 2 Class Function";
    }
};
class Child:public Parent2,public Parent1{
    public:Child(){
        cout<<"\n Child class constructor";
    }
    public:void Fun3(){
        cout<<"\n Child Class Function";
    }
};
int main(){
    Child obj;
    obj.Fun1();
    obj.Fun2();
    obj.Fun3();
    return 0;
}