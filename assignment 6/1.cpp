#include<iostream>
#include<conio.h>
using namespace std;
void print(int);
void print(int n){
    if(n>=1){
        print(n-1);
        cout<<n<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   print(n);
}