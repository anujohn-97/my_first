#include<stdio.h>
#include<string.h>

void ip(char p[])
{
 int z;
 char arr;
 for(int i=0;i<3;i++)
  {
    arr=p[i];
    printf("%c",p[i]);
  }
  
  z=(int)(arr);
 printf("%d\n",z);
}
void main()

{
 char p[100];
 printf("enter IP address");
 scanf("%s",p);
 ip(p);
}
