#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int y;
    cout<<"enter a year : ";
    cin>>y;
    if(y%100==0 && y%400==0)
      cout<<"leap year";
    else if(y%4==0 && y%100)
      cout<<"leap year";
    else 
      cout<<"non leap year";
    getch();
    return 0;
}