#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int combination(int,int);
int main()
{
    int n,r;
    cout<<"enter the value of n and r : ";
    cin>>n>>r;
    cout<<"combination is "<<combination(n,r);
    getch();
    return 0;
}
int factorial(int no)
{
    int i,s=1;
    for(i=2;i<=no;i++)
       s=s*i;
    return s;
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
