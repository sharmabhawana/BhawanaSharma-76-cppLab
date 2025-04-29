/*Program:-Array of pointer to object
Stores student Information at Runtime*/
#include<iostream>
using namespace std;
class Student{
    public:int regno;string Name;
    public:void Accept(int Number,string name){
        regno=Number;
        Name=name;
    }
    void Display(){
        cout<<"\n Name="<<Name;
        cout<<"\n Registration Number="<<regno;
    }
};
int main(){
    int n,i;
    cout<<"Enter how many  Student records u want to store :";
    cin>>n;
    Student *obj[n];//Array of pointer to object.
    for(i=0;i<n;i++){
        obj[i]=new Student();//Allocate memory at run time.
        int R;string N;
        cout<<"Enter Student  Registration Number and Name :";
        cin>>R>>N;
        obj[i]->Accept(R,N);//Passing Value to Accept Function using Array Index.
    }
    for(i=0;i<n;i++){
        obj[i]->Display();//Calling Display function using array of pointer 
        //Here Each pointer of array,pointing towards different student record.
    }
    for( i=0;i<n;i++){
        delete obj[i];//Deallocate memory of Array of Pointer.
    }
    return 0;
}