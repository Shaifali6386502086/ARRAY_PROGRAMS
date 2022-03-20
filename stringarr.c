#include <stdio.h>
#include <string.h>
int main()
{
    //to arrange the names in dictionary order
    char *names[]={"Akash","Ashish","Milind","Sonali","Ananya"};
    char* t;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
          if((strcmp(names[i],names[j]))>0)
          {  t=names[i];
             names[i]=names[j];
             names[j]=t;
          }

        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%s\t",names[i]);
    }
    return 0;
 }