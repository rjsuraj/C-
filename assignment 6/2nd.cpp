#include<iostream>
#include<conio.h>
using namespace std;
void rev(int);
void rev(int n){
    if(n>=1){
        cout<<n<<" ";
        rev(n-1);
    }
}
int main()
{
   int n;
   cin>>n;
   rev(n);
}