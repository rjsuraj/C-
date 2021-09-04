#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,i;
    cout<<"enter a number : ";
    cin>>no;
    for(i=2;i<no;i++)
       if(no%i==0)
          break;
    if(i==no)
      cout<<"prime no";
    else 
      cout<<"not a prime number ";
    getch();
    return 0;
}