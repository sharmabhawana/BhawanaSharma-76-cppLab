//Write a program to create a class with name UserCount a function count(),this function will count total number of user of class.
#include<iostream>
using namespace std;
class UserCount{
    static int n;
    public: count(){
        n++;
        cout<<"Value of n is "<<n<<endl;
    } 
};
int UserCount::n =0;

int main()
{
    UserCount obj1,obj2,obj3;
    //obj1.count();
    //obj2.count();
    //obj3.count();
   cout<<"\n Total number of user are"<<UserCount::n; 
      return 0;
}