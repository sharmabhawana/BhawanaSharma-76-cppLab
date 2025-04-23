/*Exp:- 7a To implement Inheritance for a UG Course Class, PG Course Class and Diploma Course Class.
Using MultiLevel Inheritance 
Write a Program to 
a. Create a base class with name UG Course Class,
b. Create a function with name SubjectList(), here in this function display a list of Subjects and ask user to select a
 choice from given list.
c. Create a funciton with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. Create a derived class with name PG Course Class,
e. Create a function with name SpecializationList(), here in this function display a list of subjects and ask user to 
 select a choice from given list.
f. Create a function with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d.create a derived class with name Diploma Course Class,
e.create a new function with name courselist(),here in this function display a list  of subjects and ask user to select a choice from given list.
f. Create a function with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. create a derived class with name Result Class,
e. Create a function with name SelectionCriteria(), here in this funciton display a Selection criteria for the post.
1. Post1: Software Develoeper :
5 points for percentage more than 80 percent in UG
5 points for percentage more than 80 percent in PG
5 points for percentage more than 80 percent in Diploma 
f. Create a function with name FinalResult(), candiates scored more 12 ponits are qualified for this post.
 */

#include <iostream>
using namespace std;                                                                                                                       

// Base class UG Course Class
class UGCourse {
protected:          
    string ugSubject;
    float ugMarks;

public:
    void SubjectList() {
        cout << "UG Course Subjects:\n";
        cout << "1. Mathematics\n2. Physics\n3. Chemistry\n";
        cout << "\n Select a subject 1 to 3: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            ugSubject = "Mathematics";
            break;
        case 2:
            ugSubject = "Physics";
            break;
        case 3:
            ugSubject = "Chemistry";
            break;
        default:
            cout << "Invalid choice!\n";
            return;
        }
        cout << "You selected: " << ugSubject << endl;
    }

    void MarksObtained1() {
        cout << "Enter marks obtained in " << ugSubject<< ": ";
        cin >> ugMarks;
    }
};
class PGCourse {
protected:
    string pgSpecialization;
    float pgMarks;

public:
    void SpecializationList() {
        cout << "PG Course Specializations:\n";
        cout << "1. Data Science";
        cout<<"\n2. Artificial Intelligence";
        cout<<"\n3. Cyber Security";
        cout << "\n Select a specialization 1 to 3:";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            pgSpecialization = "Data Science";
            break;
        case 2:
            pgSpecialization = "Artificial Intelligence";
            break;
        case 3:
            pgSpecialization = "Cyber Security";
            break;
        default:
            cout << "Invalid choice!\n";
            return;
        }
        cout << "You selected: " << pgSpecialization << endl;
    }
    void MarksObtained2() {
        cout << "Enter marks obtained in  " << pgSpecialization << ": ";
        cin >> pgMarks;
    }
};
class DiplomaCourse {
protected:
    string diplomaCourse;
    float diplomaMarks;

public:
    void CourseList() {
        cout << "Diploma Course Subjects:\n";
        cout << "1. Computer Science";
        cout<<"\n2. Electronics";
        cout<<"\n3. Mechanical\n";
        cout << "\n Select a subject 1 to 3: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            diplomaCourse = "Computer Science";
            break;
        case 2:
            diplomaCourse = "Electronics";
            break;
        case 3:
            diplomaCourse = "Mechanical";
            break;
        default:
            cout << "Invalid choice!\n";
            return;
        }
        cout << "\n You selected: " << diplomaCourse << endl;
    }
    void MarksObtained3() {
        cout << "\n Enter marks obtained in " << diplomaCourse << ": ";
        cin >> diplomaMarks;
    }
};
// Derived class Result Class
class Result : public UGCourse, public PGCourse,public DiplomaCourse {
protected:
    float diplomaMarks;
    int points;

public:
    void DiplomaMarks() {
        cout << "\n Enter marks obtained in Diploma: ";
        cin >> diplomaMarks;
    }

    void SelectionCriteria() {
        points = 0;
        if (ugMarks > 80)
            points += 5;
        if (pgMarks > 80)
            points += 5;
        if (diplomaMarks > 80)
            points += 5;

        cout << "Selection Criteria Points: " << points << endl;
    }

    void FinalResult() {
        if (points > 12) {
            cout << "Congratulations! You are qualified for the post of Software Developer.\n";
        } else {
            cout << "You are not qualified for the post of Software Developer.\n";
        }
    }
};
int main() {
    Result obj;
    obj.SubjectList();
    obj.MarksObtained1();
    obj.SpecializationList();
    obj.MarksObtained2();
    obj.CourseList();
    obj.MarksObtained3();
    obj.DiplomaMarks();
    obj.SelectionCriteria();
    obj.FinalResult();

    return 0;
}