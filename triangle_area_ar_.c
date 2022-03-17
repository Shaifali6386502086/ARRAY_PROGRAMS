#include <stdio.h>
#include <math.h>
int main()
{ //to print the triangle according to there area arranging in accending order
     int n;
scanf("%d",&n);
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int area[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=(arr[i][0]+arr[i][1]+arr[i][2])/2;
        area[i]=sqrt(s*(s-arr[i][0])*(s-arr[i][1])*(s-arr[i][2]));
        
    } 
    printf("\n");
    int pos[n]; 
    int area2[n];
    for(int i=0;i<n;i++)
    {
        area2[i]=area[i];
    }
    for(int i=0;i<n;i++)
    {
        int temp=0;
    
        for(int j=i+1;j<n;j++)
        {
            if(area[i]>area[j])
            {
               temp=area[i];
                area[i]=area[j];
                area[j]=temp;
            }
        }
        
    } 
   
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(area[i]==area2[j])
            {
                pos[i]=j;
            }
        }

    }
    for(int i=0;i<n;i++)
    {int t=pos[i];
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[t][j]);
        }
        printf("\n");
    } 
    return 0;
}