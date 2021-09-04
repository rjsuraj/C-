#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class complex
{
    private:
      int a,b;
    public:
      void setdata(int x,int y)
      {
          a=x;
          b=y;
      }
      void showdata(){ cout<<a<<"+"<<b<<"i"<<endl;}
      friend istream& operator>>(istream&,complex&);
      friend ostream& operator<<(ostream&,complex);

      complex operator+(complex c){
          complex temp;
          temp.a = a+c.a;
          temp.b = b+c.b;
          return temp;
      }
      complex operator-(complex c){
          complex temp;
          temp.a = a-c.a;
          temp.b = b-c.b;
          return temp;
      }
      complex operator*(complex c){
          complex temp;
          temp.a = a*c.a;
          temp.b = b*c.b;
          return temp;
      }
      bool operator==(complex c){
          if(a==c.a && b==c.b)
             return true;
          else 
             return false;
      }
};
istream& operator>>(istream &din,complex &c){
    cout<<"enter real and imaginary value :\n";
    cin>>c.a>>c.b;
    return din;
}
ostream& operator<<(ostream &dout,complex c){
    cout<<c.a<<"+"<<c.b<<"i"<<endl;
    return dout;
}
int main()
{
    complex c1,c2,c3;
    system("cls");
    cin>>c1>>c2;
    c3 = c1+c2;
    cout<<c3;
    c3=c1-c2;
    cout<<c3;
    c3=c1*c2;
    cout<<c3;
    if(c1==c2)
       cout<<"true";
    else 
       cout<<"false";
    return 0;
}