/*In hybrid Inheritance
When we access parent class function from child class object due to multiple path,compiler raise a error known as Ambigious Function error
or 
Diamond Problem.
To solve this error,we have 2 different methods:
1.Scope resolution.
2.Virtual Function. */
#include<iostream>
using namespace std;
class Parent{
    public:void Fun1(){
        cout<<"\n Parent class Function";
    }
};
class Child1: virtual public Parent{
    public:void Fun2(){
        cout<<"\n Child1 class Function";
    }
};
class Child2: virtual public Parent{
    public:void Fun3(){
        cout<<"\n Child2 class Function";
    }
};
class Child3: public Child1,public Child2{
    public:void Fun4(){
        cout<<"\n Child3 class Function";
    }
};
int main(){
    Child3 obj;
    obj.Fun1();//This will raise an error, ambigious Function error (Diamond Problem)
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
    return 0;
}