/*Program:-In BankApp ,we create a Friend class Admin class as Friend class of BankApp class which can access  internal data of this class and can modify it.*/
#include<iostream>
using namespace std;
class Admin; // Forward declaration of Admin class
class BankApp{
    private:int Account_Number;
    string username;
    int password;
    float Balance;
    public:BankApp(int Number,string user,int pass,float bal){//Parameterized constructor
        Account_Number=Number;
        username=user;
        password=pass;
        Balance=bal;
    }
    public:void Display(){
        cout<<"\n Username: "<<username;
        cout<<"\n Password: "<<password;
        cout<<"\n Account Number: "<<Account_Number;
        cout<<"\n Balance: "<<Balance;
    }
    friend class Admin; // Declaring Friend class Admin inside this .
};
class Admin{
    private:int p=1111;
    public :void Reset_Pass(BankApp& obj){//Friend function definition
        obj.password=p;
    }
};
int main(){
    BankApp obj1(101,"user1",1234,10000);
    obj1.Display();
    cout<<"\n After Password Resetting";
    Admin obj2;
    obj2.Reset_Pass(obj1);    
    obj1.Display();
    return 0;
}