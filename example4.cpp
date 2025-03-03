#include<iostream>
using namespace std;
class PayApp
{
    private:float amount;
    public:void Accept(){
        cout<<"Enter your amount";
        cin>>amount;
    }
    public:void validate(){
        if(amount>0){
            cout<<"\n Amount is valid";
            Discount();
            Display();
        }
    }
    public:void Discount(){
        
    }
}