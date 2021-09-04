#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no1,no2,i,j;
    cout<<"enter lower limit and upper limit :\n";
    cin>>no1>>no2;
    for(i=++no1;i<no2;i++)
    {
        for(j=2;j<i;j++)
          if(i%j==0)
            break;
        if(i==j)
          cout<<i<<" ";
    }
    getch();
    return 0;
}