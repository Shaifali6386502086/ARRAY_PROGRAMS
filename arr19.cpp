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
cout<<"desending order of array is:"<<endl;
for(int i=0;i<(size-1);i++)
{int max=arr[i];
int loc=i;
    for(int j=i;j<size;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
            loc=j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[loc];
    arr[loc]=temp;
}
for(int i=0;i<size;i++)
cout<<arr[i]<<endl;
cout<<"ascending order of array:"<<endl;
for(int i=size-1;i>=0;i--)
cout<<arr[i]<<endl;
    return 0;
}