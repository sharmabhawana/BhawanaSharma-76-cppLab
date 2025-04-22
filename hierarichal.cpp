/*IN HIERARICHAL iNHERITANCE , A BASE CLASS is extended by multiple derived classes,there is no relation between derived classes in hierarichal inheritance,
we cannot access derived class in other derived classsss.
*/
#include<iostream>
using namespace std;
class Parent{
    //public:static int count;
    public:void Fun1(){
        cout<<"\n Parent class Function";
    }
};
class Child1:public Parent{
    public:void Fun2(){
        cout<<"\n Child  class 1 Function";
    }
};
class Child2:public Parent{
    public:void Fun3(){
        cout<<"\n Child class 2 Function";
    }
};
class Child3:public Parent{
    public:void Fun4(){
        cout<<"\n Child class 3 Function";
    }
};
//int Parent::count=0;
int main(){
    Child1 obj;
    obj.Fun1();
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
    child2 obj;
    obj.Fun1();
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
    child3 obj;
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
    return 0;
}