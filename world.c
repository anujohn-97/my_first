#include<stdio.h>
int main()
{
  int i,j;
  char b[6]="world";
  for(i=0,j=5;i<j;b[i++]=b[j--])
  {
     printf("%s ",b);
  }
}
