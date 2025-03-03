#include<iostream>
using namespace std;
class Area{
    private: float res=0;
    float l1;
    float b;
    public: Area(float radius){ // constructor 1
        res=3.14*radius*radius;
        cout<<"\n Area of circle is "<<res;
    }
    public: Area(float l,float h){ //constructor 2
        res=0.5*l*h;
        cout<<"\n Area of triangle is "<<res;
    }
    public: Area(){ //constructor 3
        l1=6,b=9;
        res=l1*b;
        cout<<"\n Area of rectangle is "<<res;
    }
};
int main(){
    Area obj1;
    Area obj2(8);
    Area obj3(8,9);
    return 0;

}