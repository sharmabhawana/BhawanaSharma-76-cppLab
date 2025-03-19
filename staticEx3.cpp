/*Declaring Static Variable inside function and inside Class*/
//Imp :Static Variable inside the class are intialized outside the class
#include<iostream>
using namespace std;
class UserCount{ 
    public:static int count;//Static variable inside class
    void counter(){
       // count=0;//Intialized inside function
        count++;
    }
    void Display(){
        cout<<"User are  "<<count<<endl;
    }

};
int UserCount::count=0;//Intialized outside class
int main(){
    UserCount user1;
    user1.counter();
    user1.Display();
    user1.counter();
    user1.Display();
    return 0;

}