#include<iostream>
using namespace std;
class Area
{
    private:float area;
    int radius;
    public:Area(){
        radius=5;

    }
    void calculate(){
        area=3.14*radius*radius;
        cout<<"\n Area is "<<area;
    }
    public:~Area(){
    }
};
int main(){
    Area obj;
    obj.calculate();
    return 0;
}