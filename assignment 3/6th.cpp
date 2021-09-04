#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no;
    cout<<"enter a number : ";
    cin>>no;
    int i;
    for(i=1;i<=10;i++)
       cout<<"\n"<<no<<"*"<<i<<" = "<<no*i;
    getch();
    return 0;
}