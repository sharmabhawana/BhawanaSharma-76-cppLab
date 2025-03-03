/*Program  to demonstrate working of function overloading and constructor overloading,,
create a class with name LoginApp, with function name Register(),
overload this function three times in this program.
1. Register function will accept username and display "Hi Message with username. "
2.Register function will accept Registration number and validate Registration between (1 to 50)
3.Register function will  accept Marks and calculate credits, for every 10 marks provide 1 credits( Max 100).
4. create default constructor of class,display message "Welcome to LoginApp".
5. create parametrized constructor of class. that accept Login credentials, like Login Pin.
*/
#include <iostream>
using namespace std;

class LoginApp {
public:
    // Function overloading - Register method with username
    void Register(string username) {
        cout << "\n Hi " << username<<" !";
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
        cout << "\n You have earned " << credits << " credits.";
    }
};

int main() {
    LoginApp app;
    
    // Testing the overloaded Register methods
    app.Register("Alice");
    app.Register(25);
    app.Register(70.0);

    return 0;
}

