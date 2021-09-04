#include<iostream>
using namespace std;
int sum(int);
int sum(int n){
    if(n>1)
       return sum(n-1)+n;
    else 
       return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}