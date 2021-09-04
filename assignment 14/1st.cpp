#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class list
{
  private:
    struct node
    {
        int item;
        node *next;
    };
    node *start;
  public:
     list() {  start = NULL; }
     void additemAtstart(int data)
     {
         node *c;
         node *n = new node;
         n->item = data;
         n->next = NULL;
         if(start==NULL)
           start=n;
         else 
           {
              c = start;
              start = n;
              start->next = c;
           }
     }
     void additemAtlast(int data)
     {
         node *c;
         node *n = new node;
         n->item = data;
         n->next = NULL;
         if(start==NULL)
           start=n;
         else 
           {
              c = start;
              while(c->next)
                c=c->next;
              c->next = n;
           }
     }
     void deleteLastitem()
     {
         node *t;
         node *c;
         t=start;
         if(start==NULL)
           cout<<"\nempty list";
         else 
         { 
           while(t->next){
                c=t;
                t=t->next;
           }
           c->next = NULL;
           delete t;
         }
     }
     void deleteFirstitem()
     {
         node *r;
         if(start==NULL)
           cout<<"\nempty list";
         else 
         {
           r = start;
           start = start->next;
           delete r;
         }
     }
     void viewListitems()
     {
         node *t;
         t=start;
         if(start==NULL)
           cout<<"\nempty list";
         else
         {
           while (t)
           {
             cout<<" "<<t->item;
             t = t->next;
           }
         }
     }
     ~list()
     {
         while(start)
           deleteFirstitem();
     }
};
int menu()
{
  int choice;
  cout<<"\n1. add item at first place\n2. add item at last place\n3. delete first item\n4. delete last item";
  cout<<"\n5. exit\n\nenter your choice : ";
  cin>>choice;
  return choice;
}
int main()
{
    list l1;
    int data;
    while(1)
    {   system("cls");
        cout<<"list : ";
        l1.viewListitems();
        switch (menu())
        {
        case 1:
            cout<<"enter a item value : ";
            cin>>data;
            l1.additemAtstart(data);
            break;
        case 2:
            cout<<"\nenter a item value : ";
            cin>>data;
            l1.additemAtlast(data);
            break;  
        case 3:
            l1.deleteFirstitem();
            break;
        case 4:
            l1.deleteLastitem();
            break;
        case 5:
            exit(0);
        default:
            cout<<"\ninvaid choice";
            break;
        }
    }
    return 0;
}