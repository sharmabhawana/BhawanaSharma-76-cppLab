/*Program to demonstrate working of static function in program
1.Static functions belong to class rather than instance of class.
2.can be accessed using class name e.g Program::Fun()
3.Can access static member only,cannot access non static members of class because they require instance of class for member intialization.
IMP:Static Function can access only static member*/
#include<iostream>
using namespace std;
class Program {
public:
    int a = 5; // non static variable.
    static int b;//static variable.
    void Fun1(){//non static function.
        cout<<"\n (Fun1) Value of a is "<<a;//non static function can access both static and non static member.
        cout<<"\n (Fun1) Value of b is "<<b;
    }
    static void Fun2(){//static function.
        //cout<<"\n (Fun2) Value of a is "<<a;//non able to access non static variable a.
        cout<<"\n (Fun2) Value of b is "<<b;//can access static variable only
    }
};
int Program::b=1;//intializing static variable outside class.
int main()
{
    Program obj1;
    obj1.Fun1();//calling of non static function using class object.
    Program::Fun2();//calling of static function using class name.
    return 0;
}