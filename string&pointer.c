#include<stdio.h>
#include<string.h>
int main()
{
    //exchange the two name of members without the help of pointer
    char names[][20]={"sonali","ananya","vidisha","nitya","sneha"};
    printf("original:\n%s %s",&names[1][0],&names[2][0]);
    for(int i=0;i<=19;i++)
    {
        char t=names[1][i];
        names[1][i]=names[2][i];
        names[2][i]=t;
    }
    printf("new:\n %s %s",&names[1][0],&names[2][0]);
    //exchange of names of member with the help of pointer
    char *names2[]={"sonali","ananya","vidisha","nitya","sneha"};
    printf("original:\n%s %s",names2[1],names2[2]);
    char *t=names2[1];
    names2[1]=names2[2];
    names2[2]=t;
    printf("new:\n %s %s",names2[1],names2[2]);
    return 0;


}