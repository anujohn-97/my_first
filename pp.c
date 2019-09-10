#include<stdio.h>
#include<string.h>
int main()
{
  int a[]={10,20,30,40,50};
  int *p[]={a,a+1,a+2,a+3,a+4};
  int **pp=p;
  printf("p=%p\n",p);
  printf("a=%p\n",a);
  printf("pp=%p\n",pp);
  printf("*p=%p\n",*p);
  printf("**p%d\n",**p);
  
  printf("%d %d %d",pp-p,*pp-a,**pp);
} 
