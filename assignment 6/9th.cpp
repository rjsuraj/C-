#include<iostream>
#include<conio.h>
using namespace std;
int sSquare(int);
int sSquare(int n){
    if (n==1)
       return 1;
    return sSquare(n-1)+(n*n);
}
int main(){
    int n;
    cin>>n;
    cout<<sSquare(n);
    getch();
    return 0;
}