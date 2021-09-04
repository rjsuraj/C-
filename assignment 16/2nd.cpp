#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("book1.txt");
    char ch;
    int count=0;
    ch=fin.get();
    while (!fin.eof())
    {
        count++;
        ch=fin.get();
    }
    fin.close();
    cout<<count;
}