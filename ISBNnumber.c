#include <stdio.h>
#include <string.h>
int main()
{  //TO check that the entered number is valid ISBN 10 digit number 
    char s[11];
    printf("enter the ISBN number:\n");
    gets(s);
    int i=0,sum=0;
    while(s[i]!='\0')
    {  if(s[i]>=48&&s[i]<=57)
    {
        sum=sum+(s[i]-48)*(i+1);
    }
    i++;
    }
    if(sum%11==0)
    {
        printf("Entered string is valid ISBN number\n");
    }
    else{
        printf("Entered string is not valid ISBN number\n");
    }
    return 0;
}

