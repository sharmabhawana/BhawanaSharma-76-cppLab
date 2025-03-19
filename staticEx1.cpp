//Normal Variable VS Static variable in 
#include<iostream>
using namespace std;
class Program{
    public:void Fun(){
        static int n=0;//Normal value inside a function.
        n++;
        cout<<" Value of n is "<<n<<endl;
    }
};
int main()
{
    Program obj1,obj2,obj3;
    obj1.Fun();
    obj2.Fun();
    obj3.Fun();
    return 0;
}