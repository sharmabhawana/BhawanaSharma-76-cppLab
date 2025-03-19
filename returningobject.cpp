//Method1 Return as Value
//Program to demonstrate working of returning object from function.
#include<iostream>
using namespace std;
class Program{
    public:int a;//class member variable.
    Program(int b){//Parametrized constructor of Program class.
        a = b;
    }
    void Display(){
        cout<<"\n Value of a is "<<a;
    }
};
Program fun()//Function with return type as class.
 {            //this Function will return object As Value. 
   Program obj1(10);
   return obj1;

 }  
 int main(){
    Program obj2 = fun();// calling  to fun() Function and return object1 as when this.
    obj2.Display();
    return 0;


                         //Function is called it will return as object.
                        //To store its return value,we use calass object.
 }           
