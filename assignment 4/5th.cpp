#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no1,no2,i;
    cout<<"enter a number :\n";
    cin>>no1>>no2;
    for(i=no1<no2?no1:no2;i>=1;i--)
       if(no1%i==0 && no2%i==0)
         break;
    cout<<"hcf is "<<i;
    getch();
    return 0;
}