#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//*****program to sort a given number using pointer****
int main()
{
    int *p,n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    p=(int *)malloc(n*2);
    for(int i=0;i<n;i++)
    {
        printf("enter the %d th character:",i+1);
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                int t;
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
                            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
return 0;
}