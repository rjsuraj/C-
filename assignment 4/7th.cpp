#include<iostream>
#include<conio.h>
using namespace std;
int countplace(int);
int main()
{
    int no,n,s=0,place,c;
    cout<<"enter a number : ";
    cin>>no;
    c=no;
    place=countplace(no);
    while(no)
    {
        n=no%2;
        s=s+n*place;
        no=no/2;
        place=place/10;
    }
    place=countplace(c);
    while(s)
    {
        n=s%10;
        no=no+n*place;
        s=s/10;
        place=place/10;
    }
    cout<<no;
    getch();
    return 0;
}

int countplace(int no)
{
    int c,place=1,i,count;
     c=no;
    for(count=0;c;count++)
      c=c/2;
    for(i=1;i<count;i++)
      place=place*10;
    return place;
}