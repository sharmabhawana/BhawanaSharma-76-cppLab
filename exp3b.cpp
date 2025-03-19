
/*3a. to update the details of a student using a member fn of student class
3b. To delete the details of a student using  a member fn of student class.*/
#include<iostream>
using namespace std;
class Student{
    public: string StudentName; int StudentID;
    float Marks, per;
    public:Student(string Name, int Id, float Mark){
        StudentName=Name;
        StudentID=Id;
        Marks=Mark;
    }
    void Display(){
        cout<<"\nName= "<<StudentName<<"\tStudentID is "<<StudentID<<"\t Marks are "<<Marks;
        
    }

};
void Semester1(Student Sem1){
    Sem1.Marks = 400;
    cout<<"\nMarks in Semester1 "<<Sem1.Marks;
}
void Semester2(Student Sem2){
    Sem2.Marks  = 450;
    cout<<"\nMarks in Semester2 "<<Sem2.Marks;
}
// void update(Student &obj){
//     obj.StudentName="Bhawana";
//     obj.Marks=480;
//     obj.StudentID=102;
//    // cout<<"\nthe updated information name is "<<obj.StudentName<<"\t"<<"marks is "<<obj.Marks<<"\t"<<"StudentID is "<<obj.StudentID<<"\n";
  
// }
void Delete(Student *pobj){
    cout<<"\n Student Records not found after deletion";
    pobj->StudentName="";
    pobj->StudentID=0;
    pobj->Marks=0;
}
int main(){
  Student obj("ABC",101,0);
  obj.Display();
  Semester1(obj);
  Semester2(obj);
//   update(obj);
//   cout<<"\nyour updated information is ";
//   obj.Display();
  Delete(&obj);
  obj.Display();
}





/* pay app using two classes in which u have to update validate accept and delete the user details based 
 on choice for update and delete (on 14/02/25)  */


//  #include<iostream>
//  using namespace std;
//  string username,emailid,name;
//  int password;
//  class Login_Details{
 
//  public: void validate(){
     
//      cout<<"enter the login password:\n";
//      cin>>password;
//      if(password==1234){
//          cout<<"valid password, so display the details.\n";
//          display();
         
//      }
//      else{
//          cout<<"Not a valid password\n";
//      }

//  }
//  public: void display(){
//      cout<<"Welcome to MyApp\n";
//  }
//  };
//  class User_Profile{
//  public: void accept(){
//      if(password==1234){
//          cout<<"password is correct, so accept the details.\n";
//          cout<<"enter the username:\n";
//      cin>>username;
     
//      cout<<"enter the emailid:\n";
//      cin>>emailid;
 
//      cout<<"enter name:\n";
//      cin>>name;
 
//      }
//      else{
//          cout<<"password is incorrect so not accepted\n";
//      }
//      // cout<<"enter the username:\n";
//      // cin>>username;
     
//      // cout<<"enter the emailid:\n";
//      // cin>>emailid;
 
//      // cout<<"enter name:\n";
//      // cin>>name;
 
//  }
//  public: void display(){
//      if(password==1234){
//          accept();
//      cout<<"\nusername is: "<<username;
//      cout<<"\nemail is: "<<emailid;
//      cout<<"\nname is: "<<name;
//      }
//      else{
//          cout<<"Not display due to incorrect password\n";
//      }
 
//  }
//  public: void update(){
//      string choice;
//      cout<<"\nyou want to delete the details: \n";  
//      cin>>choice;
// //  if(choice=="update" && password==1234){
// //          cout<<"enter the username, emailid and name for updating...\n";
// //          cin>>username;
// //          cin>>emailid;
// //          cin>>name;

// //          cout<<"\nthe updated username is: "<<username;
// //          cout<<"\nthe updated email id is: "<<emailid;
// //          cout<<"\nthe updated name is: "<<name;

// //      }
//  if(choice=="delete" && password==1234){
//      delt();
 
//  }
//  else{
//      cout<<"type correctly or password is not valid that's why user details not accepted and hence exit!!\n";
//  }

//  }
//  public: void delt(){
//      cout<<"usernsme is:"<<" ";
//      cout<<"\n email is:"<<" ";// to delete give spaces inside the double codes...
//      cout<<"\n name is:"<<" ";

//  }
//  };
//  int main(){
//      Login_Details obj;    /*there are two classes, so name the two objects differently, otherwise comiler will confuse that
//                              from which class the object belongs to... */
//      User_Profile obj1;
//      obj.validate();
//      //obj1.accept();
//      obj1.display();
//      obj1.update();
 
//  return 0;

//  },