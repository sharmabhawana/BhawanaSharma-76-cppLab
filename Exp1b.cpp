//To create a student class,its constructor,destructors and member functions and assign clubs according to grade.
#include<iostream>
using namespace std;
class Student{
   public:string StudentName;
   int StudentId;
   float Marks,per;
    //char Grade;
    public:Student(string Name,int Id,float Mark){
        StudentName=Name;
        StudentId=Id;
        Marks=Mark;
    }
    public:void Display(){
        cout<<"\n Information Entered by Student is ";
        cout<<"\n Name= "<<StudentName<<"\t Student Id= "<<StudentId<<"\t Marks are = ";
        cout<<Marks;
    }
        char Grade(){
        per=Marks/500*100;
        if(per>=80 && per<=100){
            cout<<"\n Grade is A";
            return'A';
        }
        else if(per>=70 && per<80){
            cout<<"\n Grade is B";
            return 'B';
        }
        else if(per>=60 && per<70){
            cout<<"\n Grade is C";
            return 'C';
        }
        else if(per>=50 && per<60){
            cout<<"\n Grade is D";
            return 'D';
        }
        else{
            cout<<"\n Not Qualified";
        }
    }
          void assign(char Grade) {
            if (Grade == 'A') {
                cout << "\n Student is assigned to Sports club";
            } else if (Grade == 'B') {
                cout << "\n Student is assigned to Eco club";
            } else if (Grade == 'C') {
                cout << "\n Student is assigned to NCC club";
            } else if (Grade == 'D') {
                cout << "\n Student is assigned to NSS club";
            } else {
                cout << "\n Student is not assigned to any club";
            }
        }
    public:~Student(){
        cout<<"\n Destructor Invoked";
    }
};
int main(){
    Student obj[5]={{"Ram",101,450},{"Sham",1012,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i;char res;
    for(i=0;i<5;i++){
        cout<<"\n Information of Student with id "<<obj[i].StudentId ;
        obj[i].Display(); 
        res=obj[i].Grade();
        obj[i].assign(res);
        
    }
   
    return 0;
}