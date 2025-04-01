/*Example 2*/
#include<iostream>
using namespace std;
class Program{
    public:int b;//Local variable.
    public:Program(const int a){//constant variable in constructor.
        b=a;//Passing value of constant variable to local variable.

    }
    void Display()
    {
        cout<<"\n value of a is "<<b;//Member function can access constant member of class.
        //a=2;//This will raise error,we cannot modify constant variable.
    }
};
int main(){
    Program obj(1);
    obj.Display();
    return 0;
}