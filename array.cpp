/*Program to Demonstrate Array Declaration and Array Intialization using possible direct methods.*/
#include<iostream>
using namespace std;
class ArrayProgram{
    private:int a[5];//arary declaration.
    int b[5]={1,2,3,4,5};//Direct Intialization of multiple array element at declaration point.
    public:void display(){
        a[0]=10;//intialization of Elemant at index 0 using direct method.
        a[1]=5;//intialization of Elemant at index 0 using direct method.
        cout<<"\n Array element at index 0 is "<<a[0];
        cout<<"\n Array element at index 1 is "<<a[1];
        cout<<"\n Enter array Element:";
        cin>>a[2];
        cout<<"\n Array element at index 2 is "<<a[2];
        cout<<"\n Array element of array b at index 0 is "<<b[0];
    }
};
int main(){
    ArrayProgram obj;
    obj.display();
    return 0;

}