#include<iostream>
using namespace std;
int main()
{
     int array[5];
      
    
    for(int i=0;i<5;i++)
    cin>>array[i];
    int sum=0;
    int mul=1;
    for(int i=0;i<5;i++)
    {
        sum=array[i]+sum;
        mul=mul*array[i];
    }
    cout<<"sum of array elements:"<<sum<<endl;
    cout<<"multiple of array elements:"<<mul<<endl;
}