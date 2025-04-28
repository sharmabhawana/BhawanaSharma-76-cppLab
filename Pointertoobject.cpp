/*Program:Pointer to object*/
#include<iostream>
using namespace std;
class Program{
    public:int RegNo; string name;
    public:Program(int Number,string Name){//Parameterized constructor.
        RegNo=Number;
        name=Name;
    }
    public:void Display(){
        cout<<"\n Name= "<<name;
        cout<<"\n Registration Number= "<<RegNo;
        
    }
};
int main(){
    Program obj1(1,"User1");
    Program *obj2=&obj1;//Pointer to object(*obj2 pointer pointing to address of object obj1).
    obj2->Display();//Accessing  Class member function using pointer to object.
    obj2->name="User2";//Modifying  Class member variable using pointer to object.
    obj2->Display();
    return 0;
}