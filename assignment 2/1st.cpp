#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no;
    cout<<"enter a number : ";
    cin>>no;
    if(no%7)
       cout<<"number is not divisible by 7";
    else
       cout<<"number is dividible by 7";
    getch();
    return 0;
}