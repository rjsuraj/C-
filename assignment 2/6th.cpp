#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no;
    cout<<"enter a number : ";
    cin>>no;
    if(no>0)
      cout<<"number is positive";
    else if(no<0)
      cout<<"number is negative";
    else
      cout<<"number is 0";
    getch();
    return 0;
}