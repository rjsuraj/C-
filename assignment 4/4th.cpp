#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no1,no2,i,c;
    cout<<"enter two numbers :\n";
    cin>>no1>>no2;
    if(no1>no2)
    {
       c=no1;
       no1=no2;
       no2=c;
    }
    for(i=1;i<=no1;i++)
       if((no2*i)%no1==0)
          break;
    cout<<"Lcm is "<<no2*i;
    getch();
    return 0;
}