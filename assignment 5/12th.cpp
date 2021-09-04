#include<iostream>
#include <conio.h>
using namespace std;
void fibbo(int);
void fibbo(int n){
    int a=1,b=0,c;
    while (n)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        n--;
    }
    
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    fibbo(n);
    getch();
    return 0;
}