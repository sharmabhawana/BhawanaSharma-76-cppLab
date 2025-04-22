/*Implement polymorphism in UG Class,PG class and diploma class
Polymorphism:-FUNCTION overloading and function overriding
Write a program to
a.Create a base class with MyStudyApp,
b.Create a function Login()
overload this function for admin,Student and Guest Login,
c.Login function for Admin has two parameters username(Admin)and Pin(121)
d.Login Function for Student has 1 Parameter(Registration Number,Range b/w 1 to 100)
e.Login Function for Guest has no Parameter
f.Create a function Greet as pure Virtual function of this class,
g.create a function Accept() to store user Information
i.Create a derived class UG_class
j.accept choice from user to Login as Admin,Student or Guest,according to user's choice invoke base class Login()Function ,Now Override base class 
Functions Greet() this Function will greet user with custom message e.g Welcome Admin,override Accept() and display()Function store and display 
user detail
for student admission in UG class.
k.Create a derived class PG_class
accept choice from user to Login as Admin ,Student or Guest ,according to user's choice invoke base class Login()Function,Now Override base class
 Function.*/
  #include <iostream>
  using namespace std;
    class MyStudyApp {
    public:
        virtual void Login(string username, int pin) {
            if (username == "Admin" && pin == 121) {
                cout << "Admin Login Successful!" << endl;
            } else {
                cout << "Invalid Admin Credentials!" << endl;
            }
        }
        virtual void Login(int regNumber) {
            if (regNumber >= 1 && regNumber <= 100) {
                cout << "Student Login Successful!" << endl;
            } else {
                cout << "Invalid Registration Number!" << endl;
            }
        }
        virtual void Login() {
            cout << "Guest Login Successful!" << endl;
        }
        virtual void Greet() = 0; // Pure virtual function
        virtual void Accept() = 0;
        virtual void Display() = 0;

        virtual ~MyStudyApp() {}
    };
    // Derived class for UG
    class UG_class : public MyStudyApp {
    private:
        string userDetails;
        
