#include<stdio.h>
#include<string.h>
void change(char *a)
{
  int length=strlen(a);
  for(int i=length-1;i>=0;i--)
  {
    if(a[i]==' ')
      {
	a[i]='\0';
	printf("%s ",&a[i]+1);
      }
  }
 printf("%s ",a);
}



void main()
{
  char a[]="Anubhav is trainer";
  change(a);
}
