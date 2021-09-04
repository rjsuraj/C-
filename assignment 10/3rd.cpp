#include<iostream>
#include<string.h>
using namespace std;
class person
{
    private:
      int age;
      char name[30];
    protected:
      void setage(int a) { age = a; }
      void setname(char *n) { strcpy(name,n); }
    public:
      int  getage() { return age; }
      char* getname() { return name; }
};
class employee:public person
{
    private:
      float salary;
    protected: 
      void setsalary(float s) {salary=s;}
    public: 
      float getsalary()  {return salary;}
      void setEmployee(int a,float s,char *n){
          setage(a);
          setname(n);
          salary = s;
      }
      void showEMployee(){
          cout<<getname()<<" "<<salary<<" "<<getage();
      }
};
int main()
{
    employee e1;
    e1.setEmployee(17,234.5,"aman");
    e1.showEMployee();

}