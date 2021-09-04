#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a natural number : ";
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
      cout<<2*n-(2*i-1)<<" ";
    getch();
    return 0;
}