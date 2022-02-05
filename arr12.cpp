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
cout<<"uniqe elements in an array:"<<endl;
for(int i=0;i<size;i++)
{
    int count=0;
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        count=1;
    }
    if(count!=1)
    cout<<arr[i]<<endl;
}
}
