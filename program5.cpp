/*Create  a Class Book with data member book name and price.
create an object dynamically and display its data and deallocates it memory.*/ 
#include<iostream>
using namespace std;
class Book{
    public:int price; string name;    
    public:void Display(){
        cout<<"\n Price= "<<price;
        cout<<"\n Name= "<<name;
    }
};
int main(){
    Book *obj=new Book();//Syntax class name *pointer name=new class name();
    //Ensure to allocate memory to object at run time.
    obj->price=5000;
    obj->name="User1";//accessing and allocating value to member calss using pointer to object.
    obj->Display();
    delete obj;//Deleting object to ensures that the memory of object is deallocated after program execution
    //obj->Display();//Accessing member function after deleting object will give error.
    return 0;
}