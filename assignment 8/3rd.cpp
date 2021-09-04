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
          cout<<"name="<<name<<"  id="<<empid<<"  salary="<<salary;
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
void displayEmployee(Employee []);
void displayEmployee(Employee a[]){
    int i;
    for(i=0;i<2;i++){
       cout<<"\n"<<i+1<<".";
       a[i].showEmployee();
    }
}

void sortEmployeeBySalary(Employee []);
void sortEmployeeBySalary(Employee a[]){
    int i,j;  char*p[2];
    for(i=0;i<2;i++)
      p[i]=a[i].getName();
    for(i=0;i<1;i++){
        for(j=i+1;j<2;j++){
            if(a[i].getSalary()>a[j].getSalary()){
                 float s; char n[30]; int id;
                 s=a[i].getSalary();                       id=a[i].getEmpId();  
                 a[i].setEmoloyeeSalary(a[j].getSalary()); a[i].setEmployeeId(a[j].getEmpId()); 
                 a[j].setEmoloyeeSalary(s);                a[j].setEmployeeId(id);
                 strcpy(n,p[i]);
                 strcpy(p[i],p[j]);
                 strcpy(p[j],n);
            } 
        }
    }
}

void sortEmployeeByEmpid(Employee []);
void sortEmployeeByEmpid(Employee a[]){
    int i,j; 
    char*p[2];
    for(i=0;i<2;i++)
      p[i]=a[i].getName();
    for(i=0;i<1;i++){
        for(j=i+1;j<2;j++){
            if(a[i].getEmpId()>a[j].getEmpId()){
                 float s; char n[30]; int id;
                 s=a[i].getSalary();                       id=a[i].getEmpId();  
                 a[i].setEmoloyeeSalary(a[j].getSalary()); a[i].setEmployeeId(a[j].getEmpId()); 
                 a[j].setEmoloyeeSalary(s);                a[j].setEmployeeId(id);
                 strcpy(n,p[i]);
                 strcpy(p[i],p[j]);
                 strcpy(p[j],n);   
            } 
        }
    }
}

void sortEmployeeByName(Employee []);
void sortEmployeeByName(Employee a[]){
    int i,j;
    char*p[2];
    for(i=0;i<2;i++)
      p[i]=a[i].getName();

    for(i=0;i<1;i++){
        for(j=i+1;j<2;j++){
            if(*(p[i]) > *(p[j])){
                 float s; char n[30]; int id;
                 s=a[i].getSalary();                       id=a[i].getEmpId();  
                 a[i].setEmoloyeeSalary(a[j].getSalary()); a[i].setEmployeeId(a[j].getEmpId()); 
                 a[j].setEmoloyeeSalary(s);                a[j].setEmployeeId(id);
                 strcpy(n,p[i]);
                 strcpy(p[i],p[j]);
                 strcpy(p[j],n);
            }
        }
    }
}


int main()
{ 
    Employee a[2];
    int i,id[2];
    char s[2][30];
    float f[2];
    cout<<"enter 10 name, id, salary of employee\n";
    for(i=0;i<2;i++){
        cout<<i+1<<".name= ";
        cin>>s[i];

        cout<<i+1<<".id= ";
        cin>>id[i];

        cout<<i+1<<".salary= ";
        cin>>f[i];
    }

    for(i=0;i<2;i++){
        a[i].setEmoloyeeSalary(f[i]);
        a[i].setEmployeeId(id[i]);
        a[i].setEmployeeName(s[i]);
    }
    displayEmployee(a);
    sortEmployeeByEmpid(a);
    cout<<"\n";
    displayEmployee(a);
    sortEmployeeBySalary(a);
    cout<<"\n";
    displayEmployee(a);
    sortEmployeeByName(a);
    cout<<"\n";
    displayEmployee(a);
    return 0;

}