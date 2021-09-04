#include<iostream>
#include<conio.h>
using namespace std;
void binary(int);
void binary(int n){
    if(n>=1){
        binary(n/8);
        cout<<n%8;
    }
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    binary(n);
    getch();
    return 0;
}