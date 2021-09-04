#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the number : ";
    cin>>x;
    cout<<"enter the power : ";
    cin>>y;
    int i,s=1;
    for(i=1;i<=y;i++)
       s=s*x;
    cout<<x<<"^"<<y<<" is "<<s;
    getch();
    return 0;
}