#include<iostream>
using namespace std;
class customer(){
    string name;
    int account_number;
    int balance;
    public:customer(){//Default constructor.
        name="Bhawana";
        account_number=7;
        balance=100;

    }
    //Parametrized constructor.
    customer (string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<< 
    }
}