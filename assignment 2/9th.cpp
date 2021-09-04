#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers :\n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
          cout<<a<<" is greater";
        else 
          cout<<c<<" is greater";
    }
    else if(b>c)
          cout<<b<<" is greater";
    else 
          cout<<c<<" is greater";
    getch();
    return 0;
}