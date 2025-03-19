#include<iostream>
using namespace std;
class UserCount{ 
    public:static int count;//Static variable inside class
     UserCount(){
       // count=0;//Intialized inside function
        count++;
    }
    void Display(){
        cout<<"User are  "<<count<<endl;
    }

};
int UserCount::count=0;//Intialized outside class
int main(){
    UserCount user1,user2;
    user1.Display();
    //user2.Display();
    return 0;

}