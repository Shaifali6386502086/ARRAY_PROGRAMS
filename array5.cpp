#include<iostream>
using namespace std;


int main()
{
    int array[3][3]={1, 2, 1, 4, 2, 6, 4 ,7, 5};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
         cout<<array[i][j];
         cout<<endl;
    }
    return 0;

}