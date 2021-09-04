#include<iostream>
using namespace std;
class complex
{
    private:
      int r,i;
    public:
      void setdata(int x,int y){
          r=x;
          i=y;
      }
      void showdata(){
          cout<<r<<"+"<<i<<"i"<<endl;
      }
      complex add(complex c){
          c.r = r+c.r;
          c.i = i+c.i;
          return c;
      }
      complex sub(complex c){
          c.r = r-c.r;
          c.i = i-c.i;
          return c;
      }
      complex mul(complex c){
          c.r = r*c.r;
          c.i = i*c.i;
          return c;
      }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(4,5);
    c3=c1.add(c2);
    c3.showdata();
    c3=c2.sub(c1);
    c3.showdata();
    c3=c1.mul(c2);
    c3.showdata();
    return 0;
}