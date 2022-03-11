#include <stdio.h>
#include <string.h>
int main()
{//to check that the user is valid user or not by searching user name in entered string array
    char names[6][20];
    char name[20];
    for(int i=0;i<=5;i++)
    scanf("%s",&names[i][0]);
    printf("enter the name\n");
    scanf("%s",&name);
    for(int i=0;i<=5;i++)
    {
        if(strcmp(&names[i][0],name)==0)
        {
            printf("you are valid user");
            return 0;
        }
        
    }
    printf("sorry");
    return 0;
}