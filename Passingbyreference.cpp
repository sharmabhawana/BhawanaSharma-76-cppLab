//Method 2.Pass by reference
//Program to demonstrate working of passing object as parameter to function.
#include<iostream>
using namespace std;
class Program{
    public:int a;
    public:Program(int b){//Parametrized constructor of Program class.
        a=b;
    }
    public: void Display(){
        cout<<"\n Value of a is "<<a;
    }
};
void modify(Program &obj2){//Modify function accepts obj2 as Parameter.

    obj2.a=10;//Any changes inside this Function will not modify original value of a.
    //This will create separate instance of Program class.
    //cout<<"\n Value of obj2.a "<<obj2.a;
}
int main()
    {
        Program obj1(9);//original object of class with intialization of parametrized constructor.
        obj1.Display();
        modify(obj1);//calling modify function.
        obj1.Display();
        return 0;
    }
