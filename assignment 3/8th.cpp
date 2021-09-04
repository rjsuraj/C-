#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no;
    cout<<"enter a natural number : ";
    cin>>no;
    int i,s=1;
    for(i=2;i<=no;i++)
       s=s*i;
    cout<<s;
    getch();
    return 0;
}