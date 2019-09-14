#include<stdio.h>

int n,a[20];
int top=-1;
void push()
{
  int e;
  printf("enter the element");
  scanf("%d",&e);
  a[++top]=e;
}

void pop()
{
  if(top==-1)
    {
      printf("number of elements in the stack");
    }
  else
      top--;
}

void display()
{
  if(top==-1)
   printf("number of elements in the stack");
   
  else
   {
     for(int i=top;i!=-1;i--)
     printf("%d\n",a[i]);
   }
}

void main()
{
  char c;
  do 
     {
	printf("\n1.push\n2.pop\n3.display\n");
     	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
	  push();
	  break;
	  
	  case 2:
	  pop();
	  break;
	  
	  case 3:
	  display();
	  break;

	  default:
	  printf("invalid choice\n");
	}
      
   printf("press y to continue,n to exit");
   scanf(" %c",&c);
      
   } while(c!='n');
}

