#include<stdio.h>

int add(int a[][3],int b[][3])
  {
    printf("addition of two matrices \n");
    for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
       {
   	  printf("%d ",a[i][j]+b[i][j]);
	}
     printf("\n");
    }
  }
int main()
{
  int a[3][3],b[3][3];
  printf("enter 9 elements");
  for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
       {
   	  scanf("%d",&a[i][j]);
	}
    }
 
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
       {
   	  printf("%d ",a[i][j]);
	}
     printf("\n");
    }
  
   printf("Enter second matrix 9 elements");
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
       {
   	  scanf("%d",&b[i][j]);
	}
    }
 
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
       {
   	  printf("%d ",b[i][j]);
	}
     printf("\n");
    }

   add(a,b);
   


}
