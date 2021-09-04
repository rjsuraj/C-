#include<iostream>
#include<conio.h>
using namespace std;
int nxtprime(int);
int main()
{
   int no,n;
   cout<<"enter a number : ";
   cin>>no;
   n=nxtprime(no);
   cout<<n;
   getch();
   return 0;
}
int nxtprime(int no)
{
    int i,j;
    for(i=++no;1;i++)
    {
       for(j=2;j<i;j++)
          if(i%j==0)
            break;
       if(i==j)
        {
            return i;
            break;
        }
    }
}