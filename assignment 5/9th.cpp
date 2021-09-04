#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int);
int combination(int,int);
int main()
{
    int i, j, n,k=1,l;
    cout << "enter the range : ";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        l=0;
        for (j = 1; j < n * 2; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i && k!=0){
                    cout<<combination(i-1,l);
                    k=0;
                    l++;
            }
            else{
                cout << " ";
                k=1;
            }
        }
        cout<<endl;
    }
    getch();
    return 0;
}
int factorial(int n){
    int i,s=1;
    for(i=1;i<=n;i++)
      s=s*i;
    return s;
}
int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
