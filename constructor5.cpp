#include <iostream>
using namespace std;

class LoginApp {
public:
    // Default constructor
    LoginApp() {
       cout << "\n Welcome to LoginApp" ;
    }
    
    // Parameterized constructor
    LoginApp(int loginPin) {
        cout << "\n Login successful with pin: " << loginPin ;
    }
    
    // Function overloading - Register method with username
    void Register(string username) {
        cout << "\n Hi " << username << "!" ;
    }
    
    // Function overloading - Register method with registration number
    void Register(int registrationNumber) {
        if (registrationNumber >= 1 && registrationNumber <= 50) {
           cout << "\n Registration number " << registrationNumber << " is valid." ;
        } 
        else 
        {
            cout << "\n Registration number " << registrationNumber << " is invalid. Must be between 1 and 50." ;
        }
    }
    
    // Function overloading - Register method with marks
    void Register(double marks) {
        int credits = static_cast<int>(marks) / 10;
        if (marks > 100) {
            credits = 10;  // Maximum credits is 10
        }
        cout << "You have earned " << credits << " credits." ;
    }
};

int main() {
    // Testing the default constructor
    LoginApp app1;

    // Testing the parameterized constructor
    LoginApp app2(1234);
    
    // Testing the overloaded Register methods
    app1.Register("Alice");
    app1.Register(25);
    app1.Register(70.0);

    return 0;
}
