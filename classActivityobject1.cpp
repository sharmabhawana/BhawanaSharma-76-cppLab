#include<iostream>
using namespace std;
class Employees{
    private:
        string EmployeeName;
        int Employeecode;
        int EmployeeID;
    public:
        Employees(string Name, int code, int ID)
    {
        EmployeeName=Name;
        Employeecode=code;
        EmployeeID=ID;
    }
    void display()
    {
        cout<<"\nEmployee Name= "<<EmployeeName<<"\t Employee Code= "<<Employeecode<<"\t Employee ID= "<<EmployeeID;
    }
    /*calculate component of salary like TA(3% of basic salary),DA(4% of Basic salary),HRA(5%of basic salary),PF(4%of basic salary)*/
    void Gross_salary(float basic_salary) {
        float TA = 0.03 * basic_salary;
        float DA = 0.04 * basic_salary;
        float HRA = 0.05 * basic_salary;
        float PF = 0.04 * basic_salary;
        float gross_salary = basic_salary + TA + DA + HRA - PF;
        cout << "\n TA: " << TA << "\n DA: " << DA << "\n HRA: " << HRA << "\n PF: " << PF << "\n Gross Salary: " << gross_salary;
    }
    void update(float &basic_salary) {
        float gross_salary = basic_salary + 0.03 * basic_salary + 0.04 * basic_salary + 0.05 * basic_salary - 0.04 * basic_salary;
        if (gross_salary >= 10000 && gross_salary <= 20000) {
            basic_salary *= 1.10;
        } else if (gross_salary > 20000 && gross_salary <= 30000) {
            basic_salary *= 1.15;
        } else if (gross_salary > 30000) {
            basic_salary *= 1.20;
        }
     }

    void update_profile(string new_name, int new_code) {
        EmployeeName = new_name;
        Employeecode = new_code;
    }
};

int main(){
    Employees emp1("Rahul", 101, 1001);
    float basic_salary = 10000;
    emp1.update(basic_salary);
    emp1.display();
    emp1.Gross_salary(10000);
    emp1.update(basic_salary);
    emp1.display();
    emp1.update_profile("Rohit", 102);
    emp1.display();
    return 0;
}

        
        