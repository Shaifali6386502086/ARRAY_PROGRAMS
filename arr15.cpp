#include<iostream>
using namespace std;
int main()
{
int n1,n2;
cout<<"enter the size of array:"<<endl;
cin>>n1>>n2;
int arr1[n1],arr2[n2];
cout<<"enter first array elements:"<<endl;
for(int i=0;i<n1;i++)
cin>>arr1[i];
cout<<"enter second array elements:"<<endl;
for(int i=0;i<n2;i++)
cin>>arr2[i];
int arr3[n1+n2];
int k=0;
for(int i=0;i<n1+n2;i++)
{ if(i>n1-1)
{
    arr3[i]=arr2[k];
    k++;

}
else{
    arr3[i]=arr1[i];
}
}
cout<<"array after merging two array:"<<endl;
for(int i=0;i<n1+n2;i++)
cout<<arr3[i]<<endl;
return 0;
}

