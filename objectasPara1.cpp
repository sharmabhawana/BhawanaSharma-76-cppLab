//Program to demonstrate of Passing object as Parameter to a function
//use different methods
//1.Pass by value 
//2.Pass by Reference
//3.Pass by Pointer
//4.Pass by const Reference
#include<iostream>
using namespace std;
class Program{
    public:int a=1;
    public:void Display(){
        cout<<"\n Value of a in class is "<<a;
    }
};
void method1(Program obj1){//Pass by value(create separate copy of object)
   obj1.a=2;//any change inside this function will  not modify original value.
    cout<<"\n Value of a in method1 is "<<obj1.a;
}
void method2(Program &obj){
    obj.a=3;//any change inside this function will modify original value.
     cout<<"\n Value of a in method2 is "<<obj.a;
 }
 void method3(Program *pobj)//Pass by pointer.
{
    pobj->a=4;//any change inside this function will modify original value.
    cout<<"\n Value of a in method3 is "<<pobj->a;
 }
 void method4(const Program obj2){
    // obj2.a=5;//This will generate an error (we can only read data but not modify)
     cout<<"\n Value of a in method1 is "<<obj2.a;
 }
int main(){
    Program obj;
    obj.Display();
    method1(obj);
    method2(obj);
    obj.Display();
    method3(&obj);
    obj.Display();
    method4(obj);
    obj.Display();
    return 0;
}
