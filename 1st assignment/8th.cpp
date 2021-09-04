#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two number :\n";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<" b= "<<b;
    getch();
    return 0;
}