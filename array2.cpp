#include<iostream>
using namespace std;
int main()
{
     int n, array[5];
     int count=0;
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<5;i++)
    cin>>array[i];
    cout<<"enter the number which you need to be searched:"<<endl;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        if(array[i]==n)
        {count++;
        
            break;
        }
    }
    if(count!=0)
     cout<<"number is present in entered number";
     else
      cout<<"number is not present in entered numbers";
return 0;
}