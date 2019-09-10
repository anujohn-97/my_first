#include<stdio.h>
int main()
{
char e[3][3]={};
 for(int d=0;d<10;d++)
{
  char a;
  int b,c;
  printf("enter x or o\n");
  scanf("%c",&a);
  printf("enter the position \n");
  scanf("%d %d",&b,&c);
  for(int i=0;i<2;i++)
    {
  	for(int j=0;j<2;j++)
	 {
	    if((i==b)&&(j==c))
		{
		   e[i][j]=printf("%c",a);
		}
	    else
		e[i][j]=printf(" ");
	  }
	printf("\n");
    }
}
}
