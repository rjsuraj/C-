#include<iostream>
#include<conio.h>
using namespace std;
int sumOdd(int);
int sumOdd(int n){
    if (n==1)
       return 1;
    return sumOdd(n-1)+(n*2-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumOdd(n);
    getch();
    return 0;
}