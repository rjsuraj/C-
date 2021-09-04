#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex() {a=0; b=0;}
    complex(int x,int y){
        a=x;
        b=y;
    }
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void showdata(){
        cout<<a<<"+"<<b<<"i\n";
    }
};
int main()
{
    complex c1,c2(5,6),c3(1,2);
    c2.showdata();
    c1.setdata(2,3);
    c1.showdata();
    c3.showdata();
    return 0;
}
