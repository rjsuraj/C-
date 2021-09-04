#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,x=0,r;
    cout<<"enter a number : ";
    cin>>no;
    while(no)
    {
       r=no%10;
       no=no/10;
       x=10*x+r;
    }
    cout<<"reverse is "<<x;
    getch();
    return 0;
}