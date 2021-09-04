#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any one character :\n";
    cin>>ch;
    if(ch>='0' && ch<='9')
      cout<<"charater is digit";
    else if(ch>='a' && ch<='z')
      cout<<"character is lowercase alphabet";
    else if(ch>='A' && ch<='Z')
      cout<<"character is uppercase alphabet";
    else 
      cout<<"character is special character";
    getch();
    return 0;    
}