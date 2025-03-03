/*Program to demonstrate working of array of object(Method1)*/
#include<iostream>
using  namespace std;
class Program{//class Declaration.
    private:int Regno;float Marks;//Private member of class.
    public:Program(int R,float M){//Parametrized constructor of class.
        Regno=R;
        Marks=M;
    }
    public:void Display(){//Function of class.
        cout<<"\n RegNumber= "<<Regno<<"\t"<<"Marks= "<<Marks;


    }
};
int main()
    {
        Program obj[3]={{101,450},{102,430},{103,440}};//array of object with manual initialization.
        int i;
        for(i=0;i<3;i++){
            obj[i].Display();//Calling of display function with array of object.
            
        }
        return 0;

    }
