#include<iostream>
using namespace std;
class Program{//class with name program.
    public:Program( string name,int MobNo){//classconstructor.
    cout<<"Name is "<<name;
    cout<<"Mobile Number is "<<MobNo;
    }
};
int main(){ 
    string nm;
    int mob;
    cout<<"Enter name and mobile number:";
    cin>>nm>>mob;
    Program obj(nm ,mob); 
    return 0;
}