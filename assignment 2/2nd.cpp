#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the sides of triangle :\n";
    cin>>a>>b>>c;
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
       cout<<"right angled triangle";
    else
       cout<<"not an right angled triangle";
    getch();
    return 0;
}