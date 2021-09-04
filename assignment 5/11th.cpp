#include<iostream>
#include <conio.h>
using namespace std;
void hcf(int,int);
void hcf(int a,int b)
{
    int i;
    for(i=(a<b?a:b);i>=1;i--)
       if(a%i==0 && b%i==0)
            break;
    cout<<i;
}
int main()
{
    int a,b;
    cout<<"enter two number : ";
    cin>>a>>b;
    hcf(a,b);
    getch();
    return 0;
}