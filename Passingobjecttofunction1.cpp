//Method1(Pass By Value):Passing object as parameter to Function:
#include<iostream>
using namespace std;
class Result{
    public:string Name;int RollNo;float Marks;int credits;
    public:Result(string Name1,int Rollno1,float Marks1,int credits1){
        Name=Name1;
        RollNo=Rollno1;
        Marks=Marks1;
        credits=credits1;
    }
    public:void Display(){
        cout<<"\n Name= "<<Name<<"\t Roll No= "<<RollNo<<"\t Marks= "<<Marks;
    }
};
void Semseter1(Result sem1){
    sem1.Marks=400;
    cout<<"\n Marks of Semester 1= "<<sem1.Marks;
}
void Semseter2(Result sem2){
    sem2.Marks=350;
    cout<<"\n Marks of Semester 2= "<<sem2.Marks;
}
void Semseter3(Result sem3){
    sem3.Marks=450;
    cout<<"\n Marks of Semester 3= "<<sem3.Marks;
}
void credits1(Result &sem11){
    sem1.credits=4;
    cout<<"\n Credits of Semester = "<<credits.Marks;
}
void credits2(Result &sem2){
    sem2.credits=4;
    cout<<"\n Credits of Semester = "<<credits.Marks;
}
void credits3(Result &sem3){
    sem3.credits=4;
    cout<<"\n Credits of Semester = "<<credits.Marks;
}


int main(){
    Result obj("ABC",1,0,0);
    obj.Display();
    Semseter1(obj);
    credits(obj);
    obj.Display();
    Semseter2(obj);
    obj.Display();
    credits(obj);
    Semseter3(obj);
    obj.Display();
    credits(obj);
    return 0;
}