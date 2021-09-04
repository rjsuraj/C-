#include<iostream>
#include<conio.h>
using namespace std;
int sumEven(int);
int sumEven(int n){
    if (n==1)
       return 2;
    return sumEven(n-1)+(n*2);
}
int main(){
    int n;
    cin>>n;
    cout<<sumEven(n);
    getch();
    return 0;
}