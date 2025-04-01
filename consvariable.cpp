/*Mutable and Immutable (Read only)form of data.
In cpp,to use immutable form of data,we use constant members,
1.constant variables.
2.constant Function.
3.constant object.
If we create a variable as constant ,we cannot modify or update value of constant variable after intialization.
If we create a function as constant ,the function will not update the value of member variable.
If we create a object as constant,it will call only constant function ,not able to call non constant function.
we can create a constant member using const keyword.
syntax of constant variable.
const data type variable name;
e.g const int a;
syntax of constant function.
return type function name(Parameter list)const

*/
#include<iostream>
using namespace std;
class Program{
    public:const int a=1;//constant variable
    void Display(){
        cout<<"\n value of a is "<<a;//Member function can access constant member of class.
        //a=2;//This will raise error,we cannot modify constant variable.
    }
};
int main(){
    Program obj;
    obj.Display();
    return 0;
}