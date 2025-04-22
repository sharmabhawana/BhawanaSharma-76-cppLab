/*Inhertiance constructor,Destructor
In Inhertiance constructor follows top to bottom Approach ,first base class constructor called and then child class constructor.
Destructor follows Bottom up approach ,first child class destructor and then parent class.
Example:Multi Level Inhertiance.*/

#include <iostream>
using namespace std;
class Parent {
    public:Parent(){//Base Class
        cout<<"\n Parent Class Constructor called:";
    }
    public:~Parent(){//Base Class
        cout<<"\n Parent Class Destructor called:";
    }
    void Fun1(){//Base class function.
        cout<<"\n Parent class Function";
    }

};
class Child:public Parent {//Parent class will Extended from Parent class
    public:Child(){//Derived Class 1 Constructor
        cout<<"\n Child Class Constructor called:";
    }
    public:~Child(){//Derived Class 1 destructor
        cout<<"\n Child Class Destructor called:";
    }
    void Fun2(){//Derived class function.
        cout<<"\n Child class Function";
    }
};
class Grand_Child:public Child{//GrandChild class will Extended from Child class(To implement multi Level Inhertiance)
    public:Grand_Child(){//Derived Class 2 Constructor
        cout<<"\n Grand Child Class Constructor called:";
    }
    public:~Grand_Child(){//Derived Class 2 destructor
        cout<<"\n Grand Child Class Destructor called:";
    }
    void Fun3(){//Derived class 2 function.
        cout<<"\n Grand Child class Function";
    }
};
int main(){
    Grand_Child obj;//Object of GrandChild class
    obj.Fun1();//Function of Parent class
    obj.Fun2();//Function of Child class
    obj.Fun3();//Function of GrandChild class
    return 0;
}