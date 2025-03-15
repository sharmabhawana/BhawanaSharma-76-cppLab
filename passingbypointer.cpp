
#include<iostream>
using namespace std;
class Program{
    public:
        int a;
        //Parametrized constructor of Program class.
        Program(int *b){
            a = *b;
        }
    public: void Display(){
        cout<<"\n Value of a is "<<a;
    }
};
void modify(Program *obj2){//Modify function accepts obj2 as Parameter.

    obj2->a = 10;//Any changes inside this Function will modify original value of a.
}
int main()
    {
        int b = 9;
        Program obj1(&b);//original object of class with intialization of parametrized constructor.
        obj1.Display();
        modify(&obj1);//calling modify function.
        obj1.Display();
        return 0;
    }