#include<stdio.h>
int main()
{
	char x='j';
	int a=("%d",x);
	int b=a-31;
	
	printf("next letter %c \n",b);
}
