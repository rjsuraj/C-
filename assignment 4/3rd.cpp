#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,a=-1,b=1,c;
    cout<<"enter a natural number : ";
    cin>>no;
    while(no)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        no--;
    }
    getch();
    return 0;
}