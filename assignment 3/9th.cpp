#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int count=0,no;
    cout<<"enter a number : ";
    cin>>no;
    while(no)
    {
        no=no/10;
        count++;
    }
    cout<<count;
    getch();
    return 0;
}