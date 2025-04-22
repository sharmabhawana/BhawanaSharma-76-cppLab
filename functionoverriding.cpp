/*Function overriding :-Updation Base class function in derived class.
Basic PROGRAM */
#include<iostream>
using namespace std;
class Base{
    public:Base(){
        cout<<"\n Base Class Constructor";
    }
    public:~Base(){
        cout<<"\n Base CLass Destructor";
    }
    virtual void Fun1(){//we are declaring base class function as virtual to instruct compiler to override this function at run time.
        cout<<"\n Base Class Function";
    }
};
class Derived :public Base{
    public:Derived(){
        cout<<"\n Derived Class Constructor";
    }
    public:~Derived(){
        cout<<"\n Derived CLass Destructor";
    }
    void Fun1() override{//This keyword is optional not mandatory here but it is a good practice to use this keyword so that compiler understand
        //that this function overriding base class function.
        cout<<"\n Derived Class Function";
    }
};
int main(){
    Derived obj;
    obj.Fun1();
    return 0;

}