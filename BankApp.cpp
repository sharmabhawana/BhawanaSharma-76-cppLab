/*a)WAP to create a class with name BankApp,
b)create a parametrized constructor of this class, that intialize class attributes like ,
productId,ProductName,Product price,
c)Implement Display function to display all records,
d)Update function to change product Price.
(update function will not modify original price of product)
additionally
e)create array of object to store product information of 5 different products.
f)Accept product id from user and change price of that product only.
g)Display product not exist ,if enter incorrect product id.*/
#include<iostream> 
using namespace std;
class BankApp{
    public:int productId;
    string productName;
    int productPrice;
    public:BankApp(int id,string name,int price){
        productId=id;
        productName=name;
        productPrice=price;
    }
    public:void Display(){
        cout<<"\n Product Id= "<<productId;
        cout<<"\n Product Name= "<<productName;
        cout<<"\n Product Price= "<<productPrice;
    }
    public:void Update(int id,int price){
        if(productId==id){
            productPrice=price;
        }
        else{
            cout<<"\n Product not exist";
        }
    }
};
void modify(BankApp obj2){
    obj2.productPrice=10;
}
int main()
{
    BankApp obj1[5]={{1,"Bhawana",100},{2,"Alice",200},{3,"Ananya",300},{4,"Sanya",400},{5,"arya",500}};
    int i;
    for(i=0;i<5;i++)
    {
        obj1[i].Display();
    }
    int id,price;
    cout<<"\n Enter the product id to update price";
    cin>>id;
    cout<<"\n Enter the new price";
    cin>>price;
    for(i=0;i<5;i++)
    {
        obj1[i].Update(id,price);
    }
    for(i=0;i<5;i++)
    {
        obj1[i].Display();
    }
    for(i=0;i<5;i++){
        modify(obj1[i]);
        obj1[i].Display();
    }
    return 0;
}