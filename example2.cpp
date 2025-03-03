#include<iostream>
using namespace std;
class Student_Data
{
    public: void Welcome_Message()
    {
        cout<<"Welcome to MIET Jammu";
    }
    private: string Name;
    int RegNo;
    public: string Validate_RegNo()
 {
    cout<<"\n Enter your Name:";
    cin>>Name;
    cout<<"\n Enter your Registration Name:";
    cin>>RegNo;
    if(RegNo>=61 && RegNo<=120)
    {
        return "True";
    }
    else
    {
        return "False";
    }
 }     

};
int main()
{
    Student_Data obj;
    obj.Welcome_Message();
    string res;
    res= obj.Validate_RegNo();
    if(res=="True"){
        cout<<"\n Login Successful";
    }
    else{
        cout<<"\n Login Fail";
    }
    return 0;
}