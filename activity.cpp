   /*class activity:
    create a employee Management System,create a class with name employee,
    with attributes like, EmpID,EmpName,Address.
    Use default Constructor that initialize default values,
    use paramerized constructor to initialize employee details,
    member function InputDetails() to accept input from user,
    member function Display()to display details entered by the user.
    Destructor to display message all data erased.*/
    #include<iostream>
    using namespace std;
    class Employee
    {
        private:int empid;string empname,address;
       public:employee()//default constructor
        {
            empid=0;
        }
        public:Employee(int id,string name,string add)//parameterized constructor
        {
            empid=id;
            empname=name;
            address=add;  
        }
         public:void InputDetails()
        {
            cout<<"enter the employee id= ";
            cin>>empid;
            cout<<"enter the employee name= ";
            cin>>empname;
            cout<<"enter the employee address= ";
            cin>>address;
        }        
        public:void display()
        {
            cout<<"employee id= "<<empid<<endl;
            cout<<"employee name= "<<empname<<endl;
            cout<<"employee address= "<<address<<endl;
        }
        public :~Employee()
        {
            cout<<"\n all data erased";
        }
    };
    int main()
        {
            Employee obj[5]={{1,"Bhawana","janipur"},{2,"Alice","nagrota"},{3,"Ananya","kot"},{4,"Sanya","roopnagar"},{5,"arya","amphala"}};
            int i;
            for(i=0;i<5;i++)
            {
                obj[i].display();
                
            } 
            return 0;  
        }