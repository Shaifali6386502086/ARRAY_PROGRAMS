#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of array:"<<endl;
cin>>n;
int arr[n];
cout<<"enter array elements:"<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];
int arr1[50],arr2[50];
int j=0,k=0;
for(int i=0;i<n;i++)
{
    if(arr[i]%2==0)
    { arr1[j]=arr[i];
        j++;
    }
    else
    {
        arr2[k]=arr[i];
        k++;
    }
    cout<<"array with odd elements:"<<endl;
    for(int i=0;i<k;i++)
    cout<<arr2[i]<<endl;
    cout<<"array with even elements:"<<endl;
    for(int i=0;i<j;i++)
    cout<<arr1[i]<<endl;
}
return 0;
}