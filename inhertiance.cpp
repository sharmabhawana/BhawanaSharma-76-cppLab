/*Inhertiance :Important Feature of opp
Reusability is possible in software Application only because of inhertiance.
In Inhertiance we use existing class feature into new class but our new class must have atleast 1 new feature.
Types of Inhertiance in cpp
1.Single Level Inhertiance.
2.Multi Level Inhertiance
3.Multiple  Inhertiance
4.Hybrid Inhertiance 
5.Hierarichal Inhertiance.
Imp Point:-In Inhertiance we can only create instance of child class.
*/
//Program Single Level Inhertiance
#include<iostream>
using namespace std;
class MyApp{
    public:void Message(){
        cout<<"Welcome to my Application";
    }
};
class Login :public MyApp{//child class (syntax class child class name sign of inhertiance :public base class)
    private:int pin1=123,pin2;
    public:void Accept(){
    cout<<"\n Enter your pin:";
    cin>>pin2;
    if(pin1==pin2){
        cout<<"\n Login Successful";
    }
    else{
        cout<<"\n Login Fail";
    }
    }
};
int main(){
    Login obj;
    obj.Message();
    obj.Accept();
    return 0;
}