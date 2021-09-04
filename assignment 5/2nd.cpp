#include<iostream>
#include<conio.h>
using namespace std;
int evod(int);
int main()
{
    int no;
    cout<<"enter the number : ";
    cin>>no;
    int n=evod(no);
    if(n)
      cout<<"even no";
    else 
      cout<<"odd no";
    getch();
    return 0;
}
int evod(int no)
{
    if(no%2)
      return 0;
    else 
      return 1;
}