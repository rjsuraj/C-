#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the a , b and c values of equation\n";
    cin>>a>>b>>c;
    int d;
    d=b*b-4*a*c;
    if(d>0)
      cout<<"real roots";
    else if(d<0)
      cout<<"imaginary roots";
    else 
      cout<<"equal roots";
    getch();
    return 0;
}