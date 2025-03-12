/* Exp 2(a.) To allcoate appropriate access specifiers to data members of student and course class along with jjustification in 
comments*/
/*we declared Mmeber variables or attributes of class student and class course like student Name, Student ID, Marks, Percentage,
Course Name , Course ID, Course Credits as private member to protect our data from unauthorized access.
we declared Member Function like Display(), Grade(), Club Assignment(), Course_Information_Display(), Course Selection() of class 
Course and Class Student as Public to share information between different members of class.
We declared Constructor and Destructor of class course and class student as public because we cannot assign any other access specifier 
to them.
In Opps Programming we prioritize data over functions and provide layer to security to member variables to protect information stored 
inside member variable is not accessible be any unauthorized entity.*/

    






/*Exp 2(a). To allocate appropriate access specifiers to data members of student
 and course class along with justification in comments. */

 //--  to write *****
// We Declared Member Variables or Attributes of Class Student and Class Course
// like Student Name , Student Id , Marks , Percentage , Course Name,
// Course Id , Course Credit as private member to protect our data from 
// unauthorized access.
// We declared Member Function like Display(),Grade(),Club Assignment(),
// Course_Information_DIsplay(), Course Selection() of class Course and Class Student 
// as Public to share information between different members of  class.
// We declared Constructor and Destructor of Class Course and class Student as public
// because we cannot assign any other access specifier to them.
// In Opps Programming we prioritize data over functions and provide layer to security
// to member varibles to protect information stored inside member varibale is not 
// accessible by any unauthorozed entity.


#include<iostream>
using namespace std;
class Student{
private: string StudentName; int StudentId; //we declared member variables of class Student like Student Name ,
 //Student Id , Marks , Percentage as private member to protect our data 
float Marks,per;
public: Student(string Name , int Id,float Mark ){
    StudentName = Name;   /*We declared Constructor and Destructor of Class Course and class Student as public
    because we cannot assign any other access specifier to them.*/
    StudentId = Id;
Marks = Mark;  
}
void Display(){
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;   /* We declared Member Function like Display(),Grade(),Club Assignment(),
    search() of class Course and Class Student 
    as Public to share information between different members of  class.*/
}
char Grade(){
    per=Marks/500*100;
    if(per>=80 && per <=100){
        cout<<"\n Your Grade is A";
        return 'A';
    }
   else if(per>=70 && per <80){
        cout<<"\n Your Grade is B";
        return 'B';
    }
    else if(per>=60 && per <70){
        cout<<"\n Your Grade is C";
        return 'C';
    }
    else if(per>=50 && per <60){
        cout<<"\n Your Grade is D";
        return 'D';
    }else{
    cout<<"\n Not Qualified. ";
    }
}
void Club_Assignment(char grade){
if(grade=='A'){
    cout<<"\n Sports Club";
}
else if(grade=='B'){
    cout<<"\n Eco Club";
}
else if(grade=='C'){
    cout<<"\n NCC Club";
}
else if(grade=='D'){
    cout<<"\n NSS Club";
}
}

int search(){
    int id1;
    cout<<"\n Enter your Student Id ";
    cin>>id1;
    return id1;
}
public: ~Student(){
    cout<<"\nDestructor Invoked of class student ";
}
};

class Course{   
    private: string CourseName; int CourseID,per,att; int CourseCredits;//we declared member variables of class Course like
    //Course Name,Course Id , Course Credit as private member to protect our data from unauthorized access.
    public: Course(string Name, int ID, int Credits){
        CourseName=Name;
        CourseID=ID;
        CourseCredits=Credits;  /*We declared Member Function like Display(),
        Course_Information_DIsplay(), Course Selection() of class Course and Class Student 
        as Public to share information between different members of  class.*/

    }
    void display(){
        cout<<"\n course name is "<<CourseName<<"\tCourse Id is "<<CourseID;
        cout<<"\n course Credits are "<<CourseCredits<<"\n";
        
    }
    public: void CoursAssignment(){
        //Here Accept Student Percentage, Attendence and Assign course according to
        /*1. percentage greater than 80 or Attendence more than 90, course option all
        2. Percentage between 70 to 80 or attendence more than 80 course option java
        3.  Percentage between 60 to 70 or attendence more than 70 course option cpp
        4.Percentage between 60 to 70 or attendence more than 60 course option PHP
        5. Percentage between 50 to 60 or attendence more than 50 course option C */
        cout<<"\nenter the percentage ";
        cin>>per;
        cout<<"\nenter the attendence ";
        cin>>att;
        if(per>80 || att>90){
            cout<<"\nyou can choose all the courses";
        }
        else if(per>=70 && per<=80 || att>80){
            cout<<"\ncourse option is java";
        }
        else if(per>=60 && per<=70 || att>70){
            cout<<"\ncourse option is CPP";
        }
        else if(per>=60 && per<=70 || att>60){
            cout<<"\ncourse option is PHP";
        }
        else if(per>=50 && per<=60 || att>50){
            cout<<"\ncourse option is C";
        }
        else{
            cout<<"\nstudent perc not acccpeted\n";
        }



    }

    public:~Course()
     {
         cout<<" \nDestruction Invoked of class course";
     }
};

int main(){
    // int i;
    // Student obj[2]={{"Ram",101,450},{"Sham",102,480}};
    // obj[1].Display();
    // obj[1].Grade();
    // char res;
    // res=obj[1].Grade();
    // obj[1].Club_Assignment(res);

    // Course obj1[2]={{"C",1,8},{"C++",2,6}};
    // for( i=0;i<2;i++){
    //             obj1[i].display();
    //             //obj[i].CoursAssignment();
    //         }
    //         for(i=0;i<2;i++){
    //            cout<<"\ncourse options according to  the student percenatage and attendence!!";
    //             obj1[i].CoursAssignment();
    //         }
 

    Student obj[2]={{"Ram",101,450},{"Sham",102,390}};
        int i,id2;char res;
        for(i=0;i<2;i++){
            // cout<<"\n Information of Student with id "<<obj[i].StudentId;
            obj[i].Display(); 
            res=obj[i].Grade(); 
            obj[i].Club_Assignment(res);      
        }  
        cout<<"\n the course class called\n";
    
        Course obj1[2]={{"C",1,8},{"C++",2,6}};
        
        for( i=0;i<2;i++){
            obj1[i].display();
            //obj[i].CoursAssignment();
        }
        for(i=0;i<2;i++){
           cout<<"\ncourse options according to  the student percenatage and attendence!!";
            obj1[i].CoursAssignment();
        }
        return 0;

}