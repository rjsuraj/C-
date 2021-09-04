#include<iostream>
#include<conio.h>
using namespace std;
float area(int);
int main()
{
    int r;
    cout<<"enter radius of circle : ";
    cin>>r;
    cout<<"area is "<<area(r);
    getch();
    return 0;
}
float area(int r)
{
    return 3.14*r*r;
}