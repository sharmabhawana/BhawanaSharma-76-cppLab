#include<iostream>
using namespace std;
class Student_Data
{
    public: void Welcome_Message()
    {
        cout<<"Welcome to MIET Jammu";
    }

};
int main()
{
    Student_Data obj;
    obj.Welcome_Message();
    return 0;
}