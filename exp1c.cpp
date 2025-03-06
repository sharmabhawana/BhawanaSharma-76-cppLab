//Program to create a course class,its constructor,destructor and member functions.
#include<iostream>
using namespace std;
class Course{
    public:string CourseName;
    int CourseId;
    float Credits;
    public:Course(string Name,int Id,float CourseCredits){
        CourseName=Name;
        CourseId=Id;
        Credits=CourseCredits;
    }
    public:void Display(){
        cout<<"\n Course Name is "<<CourseName<<"\t Course Id is "<<CourseId;
        cout<<"\n course credits are " <<Credits;
    }
    void CourseAssignment(){
        /*Here Accept student Percentage ,Attendance and assign course according to
        1.Percentage greater than 80 or Attendance more than 90,Course option all
        2.Percentage between 70 and 80 or attendance more than 80, Course Option Java.
        3. Percentage between 60 and 70 or attendance more than 70, Course Option CPP
        4.Percentage between 60 and 70 or attendance more than 60, Course Option PHP.
        5.Percentage between 50 and 60 or attendance more than 50, Course Option C.
        */
        cout<<"\n Enter the Percentage of Student: ";
        float per;
        cin>>per;
        cout<<"\n Enter the Attendance of Student: ";
        float attendance;
        cin>>attendance;
        if(per>80 || attendance>90){
            cout<<"\n Course Option is All";
        }
        else if((per>=70 && per<=80) || attendance>80){
            cout<<"\n Course Option is Java";
        }
        else if((per>=60 && per<=70) || attendance>70){
            cout<<"\n Course Option is CPP";
        }
        else if((per>=60 && per<=70) || attendance>60){
            cout<<"\n Course Option is PHP";
        }
        else if((per>=50 && per<=60) || attendance>50){
            cout<<"\n Course Option is C";
        }
        else{
            cout<<"\n No Course Option";
        }
    }
    public:~Course(){
        cout<<"\n Destructor Invoked";
    }
};
int main()
{
    Course obj[5]={{"C++",101,4},{"Java",102,5},{"PHP",103,3},{"C",104,2},{"Python",105,3}};
    int i;
    for(i=0;i<5;i++){
        obj[i].Display();
    }
    obj[i].CourseAssignment();
    return 0;
}
