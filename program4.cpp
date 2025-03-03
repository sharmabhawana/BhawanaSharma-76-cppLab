/*Program to demonstrare the concept of function overloading.
Create a class with name Shapes, create a function with name area(),
with name Area function calculate Area of circle,Area of Rectangle,Area of triangle,
using function overloading.
*/
#include<iostream>
using namespace std;
class shapes{
    private: float res=0;
    float l1;
    float b;
    public:void Area(float radius){
        res=3.14*radius*radius;
        cout<<"\n Area of circle is "<<res;
    }
    public:void Area(float l,float h){
        res=0.5*l*h;
        cout<<"\n Area of triangle is "<<res;
    }
    public:void Area(){
        l1=6,b=9;
        res=l1*b;
        cout<<"\n Area of rectangle is "<<res;
    }
};
int main(){
    shapes obj;
    obj.Area();
    obj.Area(6);
    obj.Area(4,5);
    return 0;

}