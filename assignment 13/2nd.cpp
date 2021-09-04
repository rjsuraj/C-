#include<iostream>
#include<stdlib.h>
using namespace std;
class time
{
    private:
       int h,m,s;
    public:
      void setTime(int h,int m,int s)
      {
          this->h=h;
          this->m=m;
          this->s=s;
      }
      void showTime()
      {
          cout<<h<<":"<<m<<":"<<s<<endl;
      }
      time operator!()
      {
         time temp;
         if(h==0 && m==0 && s==0)
         {
           temp.h=1; temp.m=0; temp.s=0;
         }
         else
         {
           temp.h=0; temp.m=0; temp.s=0;
         }
         return temp;
      }
      time operator++(int)
      { 
         time temp;
         temp.s = s++;
         return temp;
      }
      time operator++()
      { 
         time temp;
         temp.s = ++s;
         return temp;
      }
};
int main()
{
    system("cls");
    time t1,t2,t3;
    t1.setTime(0,0,1);
    t2.setTime(3,0,0);
    t3 = !t1;
    t3.showTime();
    t3 = !t2;
    t3.showTime();
    return 0;
}