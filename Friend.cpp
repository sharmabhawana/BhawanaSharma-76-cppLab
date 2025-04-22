/*Program:-Friend Function 
In Banking Application where internal data like Account Number,Balance or Account holder name is required by Audit Function() 
Here we declare Audit Function in Bank class as friend function to access its private data outside the class*/
#include<iostream>
using namespace std;
class BankApp
{
    private:int AccountNo;//private members of class
        string AccountHolderName;
        float Balance;
        
    public:
         BankApp(int Number, string Name,float bal){//Parameterized constructor
            AccountNo = Number;
            AccountHolderName = Name;
            Balance = bal;
        }
        void show(){//Member function.
            cout<<"Account Number: "<<AccountNo<<endl;
            cout<<"Account Holder Name: "<<AccountHolderName<<endl;
            cout<<"Balance: "<<Balance<<endl;
        }
        friend void Audit(BankApp obj1); // Friend function declaration inside class
};
void Audit(BankApp obj1){//Friend function definition
    cout<<"Auditor Function";
    cout<<"Account Number: "<<obj1.AccountNo<<endl;
    cout<<"Balance: "<<obj1.Balance<<endl;
    cout<<"Account Holder Name: "<<obj1.AccountHolderName<<endl;
    
}
/*int main(){
    BankApp obj(101,"ABC",10000);
    BankApp obj2(102,"BBC",20000);
    obj.show();
    obj2.show();
    Audit(obj);
    Audit(obj2);
    return 0;
}*/
int main(){
    BankApp obj[10]={{101,"ABC",10000},{102,"BBC",20000},{103,"CCC",30000},{104,"DDD",40000},{105,"EEE",50000},{106,"FFF",60000},{107,"GGG",70000},{108,"HHH",80000},{109,"III",90000},{110,"JJJ",100000}};
    for(int i=0;i<10;i++){
        obj[i].show();
    }
    for(int i=0;i<10;i++){
        Audit(obj[i]);
    }
    return 0;
}