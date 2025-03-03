#include<iostream>
using namespace std;
class Login_Details
{
    private:int password;
    public:int Validate(){
        cout<<"Enter your Login password:";
        cin>>password;
        if(password==1234){
            cout<<"\n Password Is Validated";
            Display();
            return 1;
        }
        else{
            cout<<"\n Password is Invalid";
        }
    }
        public: void Display(){
            cout<<"\n Welcome to MyApp";
     
    }
};
class User_Profile
{
    private:string username,emailID,name;
    public: void Accept(){
        cout<<"\n Enter your username:";
        cin>>username;
        cout<<"\n Enter email id:";
        cin>>emailID;
        cout<<"\n Enter name:";
        cin>>name;
        
    }

    public: void Display(){
     cout <<"\n  The username is: "<<username;
     cout<<"\n  The email id is:"<<emailID;
     cout<<"\n  The name is:"<<name;
   }
};
int main(){
    int n;
    Login_Details obj1;
    obj1.Validate();
    if(n==1){
    User_Profile obj2;
    obj2.Accept();
    obj2.Display();
    }
    return 0;
}