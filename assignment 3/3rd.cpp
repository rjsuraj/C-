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
      cout<<2*i<<" ";
    getch();
    return 0;
}