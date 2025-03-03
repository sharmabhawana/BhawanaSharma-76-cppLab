#include<iostream>
using namespace std;
class Program
{
    private:int a;
     public:void Fun1(){
        cout<<"\n Function1";
    }
    public:void Fun2(){
        cout<<"\n Function2";
    } 
    public:Program(){
        a=5;
        cout<<"\n a= "<<a;
    }
    public:~Program(){
        cout<<"\n Destructor called ";
}
};
int main(){
    Program obj;
    obj.Fun2();
    obj.Fun1();
    return 0;
}