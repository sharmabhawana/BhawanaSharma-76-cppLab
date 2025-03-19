/*a. create s class with name Bank
b.Member Variable with name Balance.
c.Parametrized constructor to intilize member variable.
d.display function to display updated balance.
e.function with name NetBanking()//return object
// this function will deposist amount and add this amount with balance.*/
#include<iostream>
using namespace std;
class Bank{
    public:float Balance;
    Bank(float Bal){
        Balance=Bal;
    }
    void Display(){
        cout<<"\n Balance in account is:"<<Balance;
    }
};
Bank NetBanking(){
    float amt,bal1;
    cout<<"\n Enter Amount to deposit:";
    cin>>amt;
    Bank obj1(obj1.Balance+amt);
    //obj1.Balance=obj1.Balance+amt;
    return obj1;
}
int main(){
    Bank obj2(500);
    obj2.Display();
    obj2=NetBanking();
    obj2.Display();
    return 0;
}