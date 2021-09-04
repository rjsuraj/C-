#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
      int empid;
      char name[30];
      float salary;
    public:
      void setEmployeeId(int id){
          empid=id;
      }
      void setEmoloyeeSalary(float s){
          salary=s;
      }
      void setEmployeeName(char n[]){
          strcpy(name,n);
      }
      void showEmployee(){
          cout<<"\nname="<<name<<" id="<<empid<<" salary="<<salary;
      }
      float getSalary(){
          return salary;
      }
      char*  getName(){
          return name;
      }
      int getEmpId(){
          return empid;
      }

};
int main()
{ 
    Employee e1;
    e1.setEmployeeId(1234);
    e1.setEmoloyeeSalary(234.25);
    e1.setEmployeeName("suraj mandal");
    e1.showEmployee();
    cout<<"\n"<<e1.getName();
    return 0;

}