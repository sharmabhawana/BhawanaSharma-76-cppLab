/*Program to demonstrate the use of constant variable,constant function,constant object in a program */
#include<iostream>
using namespace std;
class Program{
    public:const int a=1;//constant variable
    int b=2;
    public:void Fun1()const{//constant Function
        cout<<"\nValue of a and b is "<< a<<"\t"<<b;
        //a++;//This will raise an error as constant function cannot modify constant
        //b++;//Variable or normal variable
        //constant function will not modify value of any variable inside its function.
    }
    public:void Fun2(){//Normal Function
        cout<<"\n Value of a and b is "<<a<<"\t"<<b;
        //a++;//This will raise an error as we cannot modify value of consatnt variable after its intialization.
        b++;
    }
};
int main(){
    const Program obj1;//constant object of class ,can call only constant member of class
    obj1.Fun1();
    //obj1.Fun2();//This will raise error as constant object cannot call normal object 
    Program obj2;//Normal object of class 
    obj2.Fun1();//can call both constant and normal member of class
    obj2.Fun2();
    return 0;

}