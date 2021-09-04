#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,n,max=0;
    cout<<"enter a number : ";
    cin>>no;
    while(no)
    {
        n=no%10;
        if(max<=n)
           max=n;
        no=no/10;
    }
    cout<<max;
    getch();
    return 0;
}