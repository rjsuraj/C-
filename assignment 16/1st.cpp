#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    fout.open("book1.txt",ios::out);
    fout<<"copy data from one book to another book";
    fout.close();

    fin.open("book1.txt",ios::in);
    char ch;
    ch=fin.get();
    fout.open("book2.txt",ios::out);
    while(!fin.eof()){       
        fout<<ch;
        ch=fin.get();
    }
    fout.close();
}