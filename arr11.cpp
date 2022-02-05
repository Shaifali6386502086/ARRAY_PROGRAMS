#include<iostream>
using namespace std;
int main()
{
     int n, array[n],fre[n];

     int count;
     cout<<"enter the number of elements present in an array:"<<endl;
     cin>>n;
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>array[i];
       fre[i]=-1;
    }
for(int i=0;i<n;i++)
{
     count=0;
    for(int j=i+1;j<n;j++)
   {    
        if(array[j]==array[i])
           {  ++count;
             fre[j]=0;
           }
   }
   if(fre[i]==0)
   cout<<array[i]<<"fount "<<count<<endl;
}
  

return 0;

}