/* To Create a stiudent class its constructor,destructor and member functions*/
#include <iostream>
using namespace std;

class Student {
private:
    std::string name;
    int age;
    int roll_number;

public:
    // Constructor
    Student(string studentName, int studentAge, int studentRollNumber) {
        name = studentName;
        age = studentAge;
        roll_number = studentRollNumber;
        cout << "Constructor called: Student created\n";
    }

    // Destructor
    ~Student() {
        cout << "Destructor called: Student destroyed\n";
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
           cout << "Roll Number: " << roll_number << "\n";
    }

    // Member function to set student name
    void setName(string studentName) {
        name = studentName;
    }

    // Member function to get student name
    std::string getName() {
        return name;
    }
};

int main() {
    // Creating an object of Student class
    Student student1("John Doe", 20, 101);

    // Displaying student details
    student1.displayDetails();

    // Setting a new name
    student1.setName("Jane Smith");

    // Displaying updated student details
    cout << "Updated Student Details:\n";
    student1.displayDetails();

    return 0;
}
