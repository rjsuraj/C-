 #include<iostream>
#include<conio.h>
using namespace std;
void odd(int);
void odd(int n){
    if(n>=1){
        odd(n-1);
        cout<<n*2-1<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   odd(n);
}