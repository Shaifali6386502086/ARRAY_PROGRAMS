#include<iostream>
using namespace std;
int main()
{int arr[6]={2,3,15,15,3,2};
int count=0;
for(int i=0,j=5;i++&&j--;j--,i++)
{
    if(arr[i]!=arr[j])
   { count=1;
     break;
   }
}
if(count!=0)
cout<<"elements are not same from beggning to end"<<endl;
cout<<"elements are same from beggning to end"<<endl;
return 0;
}