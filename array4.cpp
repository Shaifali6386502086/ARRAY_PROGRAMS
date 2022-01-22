#include<iostream>
using namespace std;

int main()
{
    int array1[5],array2[5];
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<5;i++)
    cin>>array1[i];
for(int i=0,j=4;i<5&&j>=0;i++,j--)
array2[j]=array1[i];
cout<<"reverse array is:"<<endl;
for(int j=0;j<5;j++)
    cout<<array2[j]<<endl;
 return 0;

}