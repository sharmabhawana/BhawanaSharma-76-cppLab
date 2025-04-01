// This program demonstrates the use of constant variables and constant member functions in C++.
/* 
a. Create a constant variable a initialized with value 5.
b. Create a local variable b initialized with value 6.
c. Create a constant function Modify() and attempt to increment the values of a and b by 2 inside the function definition.
d. Create a member function Update() and increment the values of a and b by 6 inside this function definition.
Observations:
1. Constant variables cannot be modified after initialization.
2. Constant member functions cannot modify any member variables of the class.
*/

#include<iostream>
using namespace std;

class Program {
    public:
        const int a = 5; // Constant variable initialized with value 5.
        int b = 6;       // Local variable initialized with value 6.

        // Constant member function.
        void Modify() const {
            // Attempting to modify `a` or `b` will result in a compilation error.
            // a = a + 2; // Error: Cannot modify a constant variable.
            // b = b + 2; // Error: Cannot modify member variables in a constant function.

            cout << "\nInside Modify() function:";
            cout << "\nValue of a (constant): " << a;
            cout << "\nValue of b (local): " << b;
        }

        // Non-constant member function.
        void Update() {
            // `a` cannot be modified because it is a constant variable.
            // a = a + 6; // Error: Cannot modify a constant variable.
            b = b + 6; // `b` can be modified because it is not constant.

            cout << "\nInside Update() function:";
            cout << "\nValue of a (constant): " << a;
            cout << "\nValue of b (local): " << b;
        }
};

int main() {
    Program obj;

    // Call the constant function Modify().
    obj.Modify();

    // Call the non-constant function Update().
    obj.Update();

    return 0;
}