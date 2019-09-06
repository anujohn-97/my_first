#include<stdio.h>
int factorial(int a)
{
  int pro=1;
  for(int i=1;i<=a;i++)
     {
	 pro=i*pro;
	
     }
  return pro;	
}
int main()
{
  int x=factorial(4);
  printf("factorial= %d \n",x);
}

