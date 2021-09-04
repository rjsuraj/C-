#include<iostream>
using namespace std;
class box

{
    private:
      int l,b,h;
    public:
      void setDimensions(int x,int y,int z){
          l=x;
          b=y;
          h=z;
      }
      void showDimensions(){
          cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
      }
      int volume(){
          return l*b*h;
      }
};
int main(){
    box b1,b2;
    b1.setDimensions(3,5,4);
    b2.setDimensions(9,8,10);
    b1.showDimensions();
    b2.showDimensions();
    cout<<b1.volume()<<endl;
    cout<<b2.volume()<<endl;

    return 0;
}