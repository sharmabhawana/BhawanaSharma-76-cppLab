/*#include <iostream>
using namespace std;
class Student {
    char name[50];
    int rollno;
    int marks[5];

public:
    void input(const char studentName[], int roll, int subjectMarks[]) {
        for (int i = 0; i < 50; i++){ 
        name[i] = studentName[i];
        }
        rollno = roll;
        for (int i = 0; i < 5; i++) {
        marks[i] = subjectMarks[i];
        }
    }

    inline float calculatePercentage() {
        int totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        return (totalMarks / 5.0);
    }
    inline char assignGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 75)
            return 'B';
        else if (percentage >= 50)
            return 'C';
        else
            return 'D';
    }
    void display() {
        cout << "Name: " << name 
             << ", Roll No: " << rollno 
             << ", Percentage: " << calculatePercentage() 
             << "%, Grade: " << assignGrade() << endl;
    }
};
int main() {
    const int numStudents = 5;
    Student students[numStudents];
    // Input data for students
    for (int i = 0; i < numStudents; i++) {
        char name[50];
        int roll;
        int marks[5];
        cout << "Enter details for student " << (i + 1) << ": \n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks in 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> marks[j];
        }
        students[i].input(name, roll, marks);
    }
    // Display all students
    cout << "\n Student Details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }
    // Analyze Top Performer
    float highestPercentage = 0;
    int topStudentIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        float percentage = students[i].calculatePercentage();
        if (percentage > highestPercentage) {
            highestPercentage = percentage;
            topStudentIndex = i;
        }
    }
    if (topStudentIndex != -1) {
        cout << "\n Top Performer:\n";
        students[topStudentIndex].display();
    }
    // Suggest Improvement Areas
    cout << "\n Students Needing Improvement:\n";
    for (int i = 0; i < numStudents; i++) {
        if (students[i].assignGrade() == 'D') {
            students[i].display();
        }
    }

    return 0;
}*/
#include <iostream>
using namespace std;
class Student {
    char name[50];
    int rollno;
    int marks[5];

public:
    void input(const char studentName[], int roll, int subjectMarks[]) {
        for (int i = 0; i < 50; i++){ 
        name[i] = studentName[i];
        }
        rollno = roll;
        for (int i = 0; i < 5; i++) {
        marks[i] = subjectMarks[i];
        }
    }

    inline float calculatePercentage() {
        int totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        return (totalMarks / 5.0);
    }
    inline char assignGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 75)
            return 'B';
        else if (percentage >= 50)
            return 'C';
        else
            return 'D';
    }
    void display() {
        cout << "Name: " << name 
             << ", Roll No: " << rollno 
             << ", Percentage: " << calculatePercentage() 
             << "%, Grade: " << assignGrade() << endl;
    }
};
int main() {
    const int numStudents = 5;
    Student students[numStudents];
    // Input data for students
    for (int i = 0; i < numStudents; i++) {
        char name[50];
        int roll;
        int marks[5];
        cout << "Enter details for student " << (i + 1) << ": \n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks in 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> marks[j];
        }
        students[i].input(name, roll, marks);
    }
    // Display all students
    cout << "\n Student Details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }
    // Analyze Top Performer
    float highestPercentage = 0;
    int topStudentIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        float percentage = students[i].calculatePercentage();
        if (percentage > highestPercentage) {
            highestPercentage = percentage;
            topStudentIndex = i;
        }
    }
    if (topStudentIndex != -1) {
        cout << "\n Top Performer:\n";
        students[topStudentIndex].display();
    }
    // Suggest Improvement Areas
    cout << "\n Students Needing Improvement:\n";
    for (int i = 0; i < numStudents; i++) {
        if (students[i].assignGrade() == 'D') {
            students[i].display();
        }
    }

    return 0;
}
