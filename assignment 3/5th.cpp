#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,s=0;
    cout<<"enter a natural number : ";
    cin>>n;
    for(i=1;i<=n;i++)
      s=s+i;
    cout<<s;
    getch();
    return 0;
}