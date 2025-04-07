/*#include<iostream>
using namespace std;
class MyApp {
public:
    void Message() {
        cout<<"Welcome to my Application"<<endl;
    }
};
class StudentInfo:public MyApp {
private:
    string name,regno,coursename;
    int pin1=123;
public:
    string Login() {
        int pin2;
        cout<<"Enter your pin: ";
        cin>>pin2;
        if (pin1==pin2) {
            cout<<"Login Successful"<<endl;
            return "Yes";
        } else {
            cout<<"Login Failed"<<endl;
            return "No";
        }
    }
    void Accept() {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your Registration Number: ";
        cin>>regno;
        cout<<"Enter your Course Name: ";
        cin>>coursename;
    }
    void Display() {
        cout<<"Student Information:"<<endl;
        cout<<"Name: "<< name<<endl;
        cout<<"Registration Number: "<<regno<<endl;
        cout<<"Course Name: "<<coursename<<endl;
    }
};
int main() {
    StudentInfo obj;
    obj.Message();
    string loginResult = obj.Login();
    if (loginResult == "Yes") {
        obj.Accept();
        obj.Display();
    } else {
        cout << "Access Denied"<<endl;
    }
    return 0;
}*/

