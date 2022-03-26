#include <stdio.h>
#include <string.h>
int main()
{
//with the use of pointer get the substring from a string
char s1[20],s2[20];
char *p1,*p2;
p1=s1;
p2=s2;

int pos,n,i;
printf("Enter the string:\n");
gets(s1);
printf("enter the position and the number of character to extract:");
scanf("%d %d",&pos,&n);
p1=p1+pos;

for(int i=pos;i<=(pos+n);i++)
{
*p2=*p1;
p1++;
p2++;
}
*p2='\0';
printf("The substring is:%s\n",s2);

    return 0;
}