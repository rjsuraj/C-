#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int permutation(int,int);
int main()
{
    int n,r;
    cout<<"enter the value of n and r : ";
    cin>>n>>r;
    cout<<"permutation is "<<permutation(n,r);
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
int permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
}
