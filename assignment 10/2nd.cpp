#include<iostream>
using namespace std;
class time
{
    private:
      int h,m,s;
    public:
      void setTime(int x,int y,int z){
          h=x; m=y; s=z;
          if(m/60>0){
            h=h+(m/60);
            m=m-(m/60*60);
          }
          if(s/60>0){
            m=m+(s/60);
            s=s-(s/60*60);
          }
      }
      void showTime(){
          if(m/60>0){
            h=h+(m/60);
            m=m-(m/60*60);
          }
          if(s/60>0){
            m=m+(s/60);
            s=s-(s/60*60);
          }
          cout<<h<<"::"<<m<<"::"<<s<<endl;
      }
      time add(time t){
          t.h = h+t.h;
          t.m = m+t.m;
          t.s = s+t.s;
          return t;
      }
      time sub(time t){
        if(t.h<h)
          t.h = h-t.h;
        else
          t.h = -(h-t.h);

        if(t.m<m)
          t.m = m-t.m;
        else
          t.m = -(m-t.m);

        if(t.s<s)
          t.s = s-t.s;
        else
           t.s = -(s-t.s);

          return t;
      }
};
int main()
{
    time t1,t2,t3,t4;
    t1.setTime(3,67,80);
    t2.setTime(3,45,63);
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    t3=t2.sub(t1);
    t3.showTime();
    t4.setTime(2,65,124);
    t3=t1.add(t4);
    t3.showTime();
    return 0;
}