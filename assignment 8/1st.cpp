#include<iostream>
using namespace std;
class array
{
    private: 
       int arr[10];
    public:
       void inputArrayElements(){
             int i;
             cout<<"enter 10 elements :\n";
             for(i=0;i<10;i++)
                cin>>arr[i];
       }
       int findMaxElement(){
           int max=arr[0],i;
           for(i=1;i<10;i++)
              if(max<arr[i])
                 max=arr[i];

            return max;           
       }
       int findMinElement(){
           int min=arr[0],i;
           for(i=1;i<10;i++)
              if(min>arr[i])
                 min=arr[i];

            return min;           
       }
       void sort(){
           int i,j,c;
           for(i=0;i<9;i++){
               for(j=i+1;j<10;j++){
                   if(arr[i]>arr[j]){
                       c=arr[i];
                       arr[i]=arr[j];
                       arr[j]=c;
                   }   
               }
           }
       }
       void editElement(int index,int newData){
             arr[index]=newData;

       }
       int sumOfElement(){
           int i,s=0;
           for(i=0;i<10;i++)
             s=s+arr[i];
           return s;
       }
       float averageOfElements(){
           int i,s=0;
           for(i=0;i<10;i++)
              s=s+arr[i];
            return float(s)/10;
       }
       void display(){
           int i;
           cout<<endl;
           for(i=0;i<10;i++)
             cout<<arr[i]<<" ";
       }
};
int main()
{
   array a1;
   a1.inputArrayElements();
   a1.display();
   a1.sort();
   cout<<"after sorting :\n";
   a1.display();
   cout<<"\nmax is "<<a1.findMaxElement();
   cout<<"\nmin is "<<a1.findMinElement();
   a1.editElement(4,9);
   cout<<"\nafter edit : ";
   a1.display();
   array a2;
   a2.inputArrayElements();
   cout<<"\nsum is "<<a2.sumOfElement();
   cout<<"\naverage is "<<a2.averageOfElements();
}