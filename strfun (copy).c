#include<stdio.h>
#include<string.h>

 int cmp(char* a,char* b)
{
  //char* res;
  //printf("hi");
  int res=strcmp(a,b);
  printf("%d",res);
  if(res==0)
   {
	printf("strings are same");
   }
  else
	printf("strings are different");
}
  
  
int main()
{
  char* a="good";
  char* b="good";
 // printf("hiiii");
  cmp(a,b);

}
