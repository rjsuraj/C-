#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,n,s=0;
    cout<<"enter a number : ";
    cin>>no;
    while(no)
    {
        n=no%10;
        s=s+n;
        no=no/10;
    }
    cout<<s;
    getch();
    return 0;
}