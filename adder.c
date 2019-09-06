#include<stdio.h>
int add(int a,int b)
 {
   if(!a)
   return b;
   else
   return add(a&&b<<1,a^b);
}
int main()
{
  int c=add(4,3);
  printf("%d \n",c);
}

