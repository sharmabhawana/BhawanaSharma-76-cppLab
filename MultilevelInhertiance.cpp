/*Multi Level Inhertiance
a.Create a base class with name MyApp
b.create a function Message(),display welcome message on screen
c.Create a Function Login() accept pin from user and validate pin against value 123 and return Message 'Yes'or 'No;
d.Create a derived class with name StudentInfo 
e.Create a function Accept() store student Information like  name, registration number,Marks but only when user Login Successfully.
f.Create a function Display() to display student information on screen.
g.create one more derived class with name Grade_cal,this class will take inhertiance from StudentInfo class.
h.create a function Cal() this function will Accept marks from Accept()function and calculate percentage and grade based on the following criteria:
Percentage between 80 to 100 A
Percentage between 70 to 80 B
Percentage between 70 to 60 C
OtherWise Not Qualified.
*/
#include <iostream>
using namespace std;
class Parent{
    public:void Fun1(){
        cout<<"\n Parent calss Function";
    }
};
class child:public Parent{//Child class will Extended from Parent class
    public:void Fun2(){
        cout<<"\n Child class Function";
    }
};
class GrandChild:public child{//GrandChild class will Extended from Child class
    public:void Fun3(){
        cout<<"\n Grand Child class Function";
    }
};
int main(){
    GrandChild obj;//Object of GrandChild class
    obj.Fun1();//Function of Parent class
    obj.Fun2();//Function of Child class
    obj.Fun3();//Function of GrandChild class
    return 0;
}