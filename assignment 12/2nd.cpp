#include<iostream>
using namespace std;
class time
{
   private: 
     int h,m,s;
   public:
     void setTime(int h,int m,int s){
         this->h=h;
         this->m=m;
         this->s=s;
     }
     void showTIme(){
         cout<<h<<":"<<m<<":"<<s<<endl;
     }
     time operator+(time t){
         t.h=h+t.h;
         t.m=m+t.m;
         t.s=s+t.s;
         return t;
     }
     
     time operator-(time t){
         t.h=h-t.h;
         t.m=m-t.m;
         t.s=s-t.s;
         return t;
     }
     bool operator>(time t){
         if(h>t.h)
           return true;
         if(h<t.h)
           return false;
         if(m>t.m)
           return true;
         if(m<t.m)
           return false;
         if(s>t.s)
           return true;
         if(s<t.s)
           return false;

        return false;

     }
     
};
int main()
{
    time t1,t2,t3;
    t1.setTime(3,45,65);
    t2.setTime(3,46,30);
    t1.showTIme();
    t2.showTIme();
    t3=t1+t2;
    t3.showTIme();
    t3=t2-t1;
    t3.showTIme();
    if(t1>t2)
      cout<<"time t1 is greater";
    else
      cout<<"time t2 is greater";
}