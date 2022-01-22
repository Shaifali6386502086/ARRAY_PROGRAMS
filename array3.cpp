#include<iostream>
using namespace std;
int main()
{int array[10];
int pcount=0,ncount=0,ocount=0,ecount=0,zcount=0;
 
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<10;i++)
    cin>>array[i];
    for(int i=0;i<10;i++)
    {
        array[i]>=0?pcount++:ncount++;
        array[i]%2==0?ecount++:ocount++;
if(array[i]==0)
zcount++;
    }
    
    cout<<"number of positive elements:"<<pcount<<endl;
    cout<<"number of negative elements:"<<ncount<<endl;
    cout<<"number of even elements:"<<ecount<<endl;
    cout<<"number of oddelements:"<<ocount<<endl;
    cout<<"number of zeros:"<<zcount;
    return 0;
}