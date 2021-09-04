#include<iostream>
#include<conio.h>
using namespace std;
int lcm(int,int);
int main()
{
    int no1,no2;
    cout<<"enter two number :\n";
    cin>>no1>>no2;
    cout<<"lcm is "<<lcm(no1,no2);
    getch();
    return 0;
}
int lcm(int no1,int no2)
{
    int c,i;
    if(no1>no2)
    {
        c=no1;
        no1=no2;
        no2=c;
    }
    for(i=1;i<=no1;i++)
      if((no2*i)%no1==0)
         break;
    return no2*i;
}