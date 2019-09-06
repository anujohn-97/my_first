#include<stdio.h>
int main()
{
   int x;
   printf("enter a choice b/w 1 to 4\n");
   scanf("%d",&x);
   switch(x)
    {
	case 1:
	  printf("yes ur choice is right Virat is the captain \n");
	  break;
	case 2:
	  printf("ur choice is wrong.Dhoni is the previous captain \n");
	  break;
	case 3:
	  printf("ur choice is wrong.Rohith is not the captain \n");
	  break;
	case 4:
	  printf("ur choice is wrong.Jadeja is not the captain \n");
	  break;
	default:
	  printf("select any valid choice");
	}
}
