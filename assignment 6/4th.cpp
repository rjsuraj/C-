#include<iostream>
#include<conio.h>
using namespace std;
void revodd(int);
void revodd(int n){
    if(n>=1){
        cout<<n*2-1<<" ";
        revodd(n-1);
    }
}
int main()
{
   int n;
   cin>>n;
   revodd(n);
}