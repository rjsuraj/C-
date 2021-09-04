#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int main()
{
    int no;
    cout<<"enter a number : ";
    cin>>no;
    cout<<"factorial is "<<factorial(no);
    getch();
    return 0;
}int factorial(int no)
{
    int i,s=1;
    for(i=2;i<=no;i++)
       s=s*i;
    return s;
}
