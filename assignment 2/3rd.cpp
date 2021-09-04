#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no;
    cout<<"enter a number : ";
    cin>>no;
    int n;
    while(no)
    {
      n=no%10;
      if(n<0 || n>7)
         break;
      no=no/10;
    }
    if(no==0)
      cout<<"valid octal number";
    else 
      cout<<"not a valid octal number";
    getch();
    return 0;
}