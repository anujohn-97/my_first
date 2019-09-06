#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("Enter ur coolness rating");
	
	scanf("%d",&a);
	printf("Enter ur name");
	scanf("%s",&b);
	if(a>7){
	
		printf("hey ur cool %s /n",&b);
	}
	else{
		printf("better luck next time %s",&b);
	}
}
