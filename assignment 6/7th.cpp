 #include<iostream>
#include<conio.h>
using namespace std;
void sSquare(int);
void sSquare(int n){
    if(n>=1){
        sSquare(n-1);
        cout<<n*n<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   sSquare(n);
}