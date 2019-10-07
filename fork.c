#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
  int cpid=fork();
  if(cpid==0)
      printf("hello iam a child\n");
  else
       printf("hello iam a parent\n");


  return 0;
}

