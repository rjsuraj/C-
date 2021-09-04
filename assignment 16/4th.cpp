#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("3rd.cpp",ios::in);
    char ch;
    int count=0;
    ch=fin.get();
    while(!fin.eof()){
       if(ch=='\n')
         count++;
       ch=fin.get();
    }
    fin.close();
    cout<<"total no of lines in this file is "<<count+1;
    return 0;
}