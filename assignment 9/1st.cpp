#include<iostream>
using namespace std;
class account
{
    private:
      int account_no;
      float balance;
      static int RoI;
    public:
      void setBalance(float n) { balance =n; }
      void setAccountNo(int n) { account_no=n; }
      float getBalance() { return balance; }
      int   getAccountNo() { return account_no; }
      static void setRateOfInterest(int n) { RoI=n; }
      static int getRateOfInterest() { return RoI; }
};
int account::RoI;
int main()
{
    account a1,a2;
    a1.setAccountNo(1213);
    a1.setBalance(234.34);
    account::setRateOfInterest(10);
    cout<<a1.getAccountNo();
    cout<<"\n"<<a1.getBalance();
    cout<<"\n"<<account::getRateOfInterest();
}