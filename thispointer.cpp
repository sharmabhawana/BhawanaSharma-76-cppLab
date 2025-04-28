/*Program:-This Pointer.*/
#include<iostream>
using namespace std;
class A{
    private:int x;//Local Variable.
    public:A(int x){//parametrized variable.
        this->x=x;
    }
    public:void Display(){
        cout<<"Value of Local Variable is: "<<x;
    }
};
int main(){
    A obj(1);
    obj.Display();
    return 0;
}