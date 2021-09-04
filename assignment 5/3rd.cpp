#include<iostream>
#include<conio.h>
using namespace std;
int prime(int);
int main()
{
    int no;
    cout<<"enter a number  : ";
    cin>>no;
    int n=prime(no);
    if(n)
      cout<<"prime no";
    else 
      cout<<"not a prime number";
    getch();
    return 0;
}
int prime(int no)
{
    int i;
    for(i=2;i<no;i++)
       if(no%i==0)
         break;
    if(i==no)
       return 1;
    else 
       return 0;
}