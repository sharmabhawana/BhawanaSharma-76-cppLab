#include <iostream>
using namespace std;

// Base class
class EmployeeManagementSystem {
public:
    virtual void SalaryCalculate() {
        double basicSalary, workingDays, salary;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;
        salary = (basicSalary / 30) * workingDays;
        cout << "Employee Salary: " << salary << endl;
    }
};

// Derived class Manager
class Manager : public EmployeeManagementSystem {
public:
    void SalaryCalculate() override {
        double basicSalary, workingDays, salary, ta, da;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;
        ta = 0.03 * basicSalary;
        da = 0.10 * basicSalary;
        salary = ((basicSalary / 30) * workingDays) + ta + da;
        cout << "Manager Salary: " << salary << endl;
    }
};

// Derived class Developer
class Developer : public EmployeeManagementSystem {
public:
    void SalaryCalculate() override {
        double basicSalary, workingDays, salary, ta, da;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;
        ta = 0.05 * basicSalary;
        da = 0.12 * basicSalary;
        salary = ((basicSalary / 30) * workingDays) + ta + da;
        cout << "Developer Salary: " << salary << endl;
    }
};

// Derived class Accountant
class Accountant : public EmployeeManagementSystem {
public:
    void SalaryCalculate() override {
        double basicSalary, workingDays, salary, ta, da;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;
        ta = 0.04 * basicSalary;
        da = 0.09 * basicSalary;
        salary = ((basicSalary / 30) * workingDays) + ta + da;
        cout << "Accountant Salary: " << salary << endl;
    }
};

int main() {
    Accountant obj;
    obj.SalaryCalculate(); // Calls Accountant's SalaryCalculate method
    return 0;
}
