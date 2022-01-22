#include<iostream>
using namespace std;


int main()
{
    int array[5];
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<5;i++)
    cin>>array[i];
    cout<<"Elements of an array are:"<<endl;
    for(int j=0;j<5;j++)
    cout<<array[j]<<endl;
    return 0;

}