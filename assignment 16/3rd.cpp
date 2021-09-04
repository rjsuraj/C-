#include<iostream>
#include<fstream>
#include<string.h>
int search(char [],int);
using namespace std;
int main(){
   char s[10]="copy";
   if(search(s,strlen(s)))
      printf("word is present in file");
   else 
      printf("word is not present in file");
   return 0;
}
int search(char s[],int l){
    ifstream fin;
    fin.open("book1.txt",ios::in);   
    char ch;
    int i=0,count=0;
    ch=fin.get();
    while(!fin.eof()){
       if(s[i++]==ch)
         count++;
       if(ch==' '){
         count=0;
         i=0;
       }
       if(count==l)
         return 1;
       ch=fin.get();
    }
    fin.close();
    if(count!=l)
      return 0;
}