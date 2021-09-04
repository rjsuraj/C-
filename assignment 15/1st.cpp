
#include<iostream>
#include<string.h>
using namespace std;
class person
{
  private:
    int age;
    char name[30];
  public:
    void setName(char s[]){
      strcpy(name,s);
    }
    void setAge(int a){
      age=a;
    }
    char* getName() { return name; }
    int getAge()  { return age; }
 };
 class employee:public person
 {
    private:
      int empid;
      float salary;
      static int id,count;
    protected:
      int  autoid(){
         id+=123;
         return id;
      }
    public:
      employee(){
        count++;
      }
      void setEmployeeData(int age,char name[],float salary){
         setAge(age);
         setName(name);
         this->salary=salary;
         this->empid=autoid();
      }
      void showEmployeeData(){
        cout<<getAge()<<" | "<<getName()<<" | "<<empid<<" | "<<salary<<endl;
      }
      static int countEmployee(){
        return count;
      }
 };
 int employee::id;
 int employee::count;
 int main(){
   employee e1,e2,e3,e4,e5,e6;
   e1.setEmployeeData(16,"suraj",2345.23);
   e2.setEmployeeData(20,"sam",5345.23);
   e3.setEmployeeData(12,"aman",1233.1);
   e1.showEmployeeData();
   e2.showEmployeeData();
   e3.showEmployeeData();
   cout<<employee::countEmployee();
   return 0;
 }