#include<iostream>
#include<conio.h>
using namespace std;
void btwprime(int,int);
int main()
{
    int no1,no2;
    cout<<"enter two number : ";
    cin>>no1>>no2;
    btwprime(no1,no2);
    getch();
    return 0;
}
void btwprime(int no1,int no2)
{
    int i,j;
    for(i=++no1;i<no2;i++)
    {
      for(j=2;j<i;j++)
         if(i%j==0)
            break;
      if(i==j)
         cout<<i<<" ";
    }
}

