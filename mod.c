#include<stdio.h>
int findmod(int a,int b)
{
  return a%b;
}

int main()
{
  int x=findmod(6,5);
  printf("%d\n",x);
}
