#include<iostream>
#include<conio.h>
using namespace std;
void printeven(int);
void printeven(int n){
    if(n>=1){
        printeven(n-1);
        cout<<n*2<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   printeven(n);
}