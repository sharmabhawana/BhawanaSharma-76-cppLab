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
/*#include <iostream>
using namespace std;
// Base class
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

    //virtual ~MyStudyApp() {}
};

// Derived class UG_class
class UG_class : public MyStudyApp {
private:
    string name;
    int regNumber;

public:
    void Greet() override {
        cout << "Welcome to UG Class!" << endl;
    }

    void Accept() override {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    void Display() override {
        cout << "UG Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

// Derived class PG_class
class PG_class : public MyStudyApp {
private:
    string name;
    int regNumber;

public:
    void Greet() override {
        cout << "Welcome to PG Class!" << endl;
    }

    void Accept() override {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    void Display() override {
        cout << "PG Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

int main() {
    UG_class ug;
    PG_class pg;

    int choice;
    cout << "Choose Login Type: 1. Admin 2. Student 3. Guest: ";
    cin >> choice;

    if (choice == 1) {
        string username;
        int pin;
        cout << "Enter Admin Username: ";
        cin >> username;
        cout << "Enter Admin Pin: ";
        cin >> pin;
        ug.Login(username, pin); // Using UG_class for Admin Login
    } else if (choice == 2) {
        int regNumber;
        cout << "Enter Registration Number: ";
        cin >> regNumber;
        ug.Login(regNumber); // Using UG_class for Student Login
        ug.Accept();
        ug.Display();
    } else if (choice == 3) {
        ug.Login(); // Using UG_class for Guest Login
        ug.Greet();
    } else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}*/
#include <iostream>
using namespace std;

// Base class
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

// Derived class UG_class
class UG_class : public MyStudyApp {
private:
    string name;
    int regNumber;

public:
    void Greet() override {
        cout << "Welcome to UG Class!" << endl;
    }

    void Accept() override {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    void Display() override {
        cout << "UG Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

// Derived class PG_class
class PG_class : public MyStudyApp {
private:
    string name;
    int regNumber;

public:
    void Greet() override {
        cout << "Welcome to PG Class!" << endl;
    }

    void Accept() override {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    void Display() override {
        cout << "PG Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

// Derived class Diploma_class
class Diploma_class : public MyStudyApp {
private:
    string name;
    int regNumber;

public:
    void Greet() override {
        cout << "Welcome to Diploma Class!" << endl;
    }

    void Accept() override {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    void Display() override {
        cout << "Diploma Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

int main() {
    UG_class ug;
    PG_class pg;
    Diploma_class dp;

    int classChoice, loginChoice;
    cout << "Choose your class: 1. UG 2. PG 3. Diploma: ";
    cin >> classChoice;

    cout << "Choose Login Type: 1. Admin 2. Student 3. Guest: ";
    cin >> loginChoice;

    if (loginChoice == 1) {
        string username;
        int pin;
        cout << "Enter Admin Username: ";
        cin >> username;
        cout << "Enter Admin Pin: ";
        cin >> pin;
        if (classChoice == 1) {
            ug.Login(username, pin);
        } else if (classChoice == 2) {
            pg.Login(username, pin);
        } else if (classChoice == 3) {
            dp.Login(username, pin);
        }
    } else if (loginChoice == 2) {
        int regNumber;
        cout << "Enter Registration Number: ";
        cin >> regNumber;
        if (classChoice == 1) {
            ug.Login(regNumber);
            ug.Accept();
            ug.Display();
        } else if (classChoice == 2) {
            pg.Login(regNumber);
            pg.Accept();
            pg.Display();
        } else if (classChoice == 3) {
            dp.Login(regNumber);
            dp.Accept();
            dp.Display();
        }
    } else if (loginChoice == 3) {
        if (classChoice == 1) {
            ug.Login();
            ug.Greet();
        } else if (classChoice == 2) {
            pg.Login();
            pg.Greet();
        } else if (classChoice == 3) {
            dp.Login();
            dp.Greet();
        }
    } else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}

