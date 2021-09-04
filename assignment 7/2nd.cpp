#include<iostream>
using namespace std;
class time

{
    private:
      int h,m,s;
    public:
      void setTime(int x,int y,int z){
          h=x;
          m=y;
          s=z;
      }
      void showTime(){
          cout<<h<<" hr "<<m<<" min "<<s<<" sec "<<endl;
      }
};
int main(){
    time t1,t2;
    t1.setTime(3,45,20);
    t2.setTime(9,57,31);
    t1.showTime();
    t2.showTime();
    return 0;
}