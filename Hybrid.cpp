/*Hybrid Inheritance
Combining  2 or more than 2 different types of inhertiance to form hybrid inheritance.
In some situation ,when we are trying to access base class function with derived class in hybrid inheritance,compiler raise an error that function is ambigious in nature as more  than 1 path exists in this code and reach base class function and compiler confused to select the path and raise this ambiguity error.
To solve this error we use scope resolution operator or virtual inheritance.*/
#include<iostream>
using namespace std;
class Parent{
    public:Parent(){
        cout<<"\n Parent Class Constructor";
    }
    public:~Parent(){
        cout<<"\n Parent Class Destructor";
    }
    public:void Fun1(){
        cout<<"\n Parent Class Function ";
    }
};
class Child1:public Parent{
    public:Child1(){
        cout<<"\n Child1 Class Constructor";
    }
    public:~Child1(){
        cout<<"\n Child1 Class Destructor";
    }
    public:void Fun2(){
        cout<<"\n Child Class Function ";
    }
};
class Child2:public Parent{
    public:Child2(){
        cout<<"\n Child2 Class Constructor";
    }
    public:~Child2(){
        cout<<"\n Child2 Class Destructor";
    }
    public:void Fun3(){
        cout<<"\n Child2 Class Function ";
    }
};
class Child3:public Child1,public Child2{
    public:Child3(){
        cout<<"\n Child3 Class Constructor";
    }
    public:~Child3(){
        cout<<"\n Child3 Class Destructor";
    }
    public:void Fun4(){
        cout<<"\n Child3 Class  Function ";
    }
};
int main(){
    Child3 obj;
    obj.Child1::Fun1();
    obj.Child2::Fun1();
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
    return 0;
}



