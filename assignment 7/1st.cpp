#include<iostream>
using namespace std;
class complex
{
    private: 
      int a,b;
    public:
      void setdata(int x,int y){
          a=x;
          b=y;
      }
      void showdata(){
          cout<<a<<"+"<<b<<"i"<<endl;
      }
};
int main()
{
    complex c1,c2;
    c1.setdata(3,2);
    c2.setdata(7,8);
    c1.showdata();
    c2.showdata();
    return 0;
}