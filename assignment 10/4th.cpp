#include<iostream>
using namespace std;
class operations
{
    private:
       static float pi;
    public: 
      static void setpi(){
          pi=3.14;
      }
      float area(int r){
          return pi*r*r;
      }
      int area(int l,int b){
          return l*b;
      }
      int sum(int a,int b){
          return a+b;
      }
      float sum(float a,float b){
          return a+b;
      }
      char* sum(char a[],char b[]){
          int i,j;
          for(i=0;a[i];i++);
          for(j=0;b[j];j++){
              a[i]=b[j];
              i++;
          } 
          puts(a);
          return a;
      }
}; 
float operations::pi;
int main()
{
    operations::setpi();
    operations o1;
    char a[30]="suraj",b[30]=" mandal";
    cout<<o1.sum(2,3)<<endl;
    cout<<o1.sum(5.5f,2.3f)<<endl;
    puts(o1.sum(a,b));
    cout<<o1.area(2)<<endl;
    cout<<o1.area(7,5)<<endl;
    return 0;
}