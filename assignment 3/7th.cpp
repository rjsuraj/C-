#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,i,s=0;
    cout<<"enter a natural number : ";
    cin>>no;
    for(i=1;i<=no;i++)
      s=s+i*i;
    cout<<s;
    getch();
    return 0;
}