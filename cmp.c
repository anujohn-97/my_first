#include<stdio.h>
#include<string.h>

void my_fun(char* s,char* t)
{
  while(*s++=*t++);
	
}	
int main()
{
  char* a="good";
  char* b="gud";
  my_fun(a,b);
  printf("string id %s",a);
}

