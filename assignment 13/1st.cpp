#include<iostream>
using namespace std;
class complex
{
    private:
      int a,b;
    public: 
      void setdata(int a,int b){
          this->a=a;
          this->b=b;
      }
      void showdata(){
          cout<<a<<"+"<<b<<"i"<<endl;
      }
      complex operator-(){
          complex temp;
          temp.a=-a;
          temp.b=-b;
          return temp;
      }
     complex operator++(int){
      complex temp;
      temp.a = a++;
      temp.b = b++;
      return temp;
     }
    complex operator++(){
      complex temp;
      temp.a = ++a;
      temp.b = ++b;
      return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(4,5);
    c1.showdata();
    c2.showdata();
    c3 = -c1;
    c3.showdata();
    c3 = ++c2;
    c3.showdata();
    c3 = c1++;
    c3.showdata();
    c1.showdata();
    c2.showdata();
    return 0;
}