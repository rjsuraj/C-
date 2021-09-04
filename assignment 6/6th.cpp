#include<iostream>
#include<conio.h>
using namespace std;
void revEven(int);
void revEven(int n){
    if(n>=1){
        cout<<n*2<<" ";
        revEven(n-1);
    }
}
int main()
{
   int n;
   cin>>n;
   revEven(n);
}