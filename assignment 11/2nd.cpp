#include<iostream>
using namespace std;
class box
{
  private:
    int l,b,h;
  public:
    box() {l=0; b=0; h=0;}
    box(int x){
        l=x;
        b=x;
        h=x;
    }
    box(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
    void setDimensions(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
    void showDimensions(){
        cout<<l<<"::"<<b<<"::"<<h<<endl;
    }
};
int main()
{
    box b1,b2(3),b3(2,3,4);
    b2.showDimensions();
    b3.showDimensions();
    b1.showDimensions();
    b1.setDimensions(5,6,7);
    b1.showDimensions();
    return 0;
}