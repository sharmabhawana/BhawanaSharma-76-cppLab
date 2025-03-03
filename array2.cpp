/* WAP to store 10 rollno of Weak Learners of your class and 10 rollno of advance learner of your class,acc to you.
store rollno's in two different array and display the record.*/
#include<iostream>
using namespace std;
class student{
    private:int weak[10]={2,34,45,5,4,3,6,7,8,98};
   private: int advance[10]={12,44,50,15,14,33,96,97,87,9q};
    public:void record(){
        int i;
        cout<<"\n advance learner ";
        for(i=0;i<10;i++){
       cout<<advance[i]<<"\t";
}
   cout<<"\n weak learner ";
    for(i=0;i<10;i++){
    cout<<weak[i]<<"\t";
}
  }
};
int main(){
    student obj;
    obj.record();
    return 0;
}