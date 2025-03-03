/*Program to demonstrate working of Intialization using Accept method.*/
#include<iostream>
using namespace std;
class Program{
    private:int a[10];int i;
    public:void Accept(){
        int i;
        for(i=0;i<=9;i++){
            cout<<"\n Enter array elements:";
           cin>>a[i];
        }
    }
    void display(){ 
        cout<<"\n Array elements entered by user is ";
        for(i=0;i<=9;i++){
            cout<<"\t"<<a[i];
            cin>>a[i];
        }
    }
};
int main(){
    Program obj;
    obj.Accept();
    obj.display();
    return 0;
}