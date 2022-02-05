#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"enter the size of array:"<<endl;
cin>>size;
int arr[size];
cout<<"enter array elements:"<<endl;
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"after removing duplicate elements array is:"<<endl;
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            while(j<size)
            {
                arr[j]=arr[j+1];
                j++;
            }
            --size;
        }
        else{
            continue;
        }
    }
}
for(int i=0;i<size;i++)
cout<<arr[i]<<endl;
}