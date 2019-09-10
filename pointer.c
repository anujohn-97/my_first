#include<stdio.h>
int main()
{
 int x=5;
 int *y=&x;
 printf("%d\n",x);
 printf("%p\n",y);
 printf("%p\n",&x);
 printf("%d\n",*y);
 printf("%p\n",&y);
}
