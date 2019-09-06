#include<stdio.h>
int input(int a[][3],int m,int n)
{
  printf("enter the elements");
  for(int i=0;i<m;i++)
   {
     for(int j=0;j<n;j++)
       {
	 scanf("%d ",&a[i][j]);
	}
    }

}

int mul(int a[][3],int b[][3],int m,int p,int l)
{
  int result[10][10]={0};
  for(int i=0;i<m;i++)
   {
     for(int j=0;j<p;j++)
       {
	 
         for(int k=0;k<l;k++)
	    {
        	result[i][j]=result[i][j]+a[i][k]*b[k][j];
	    }
        }
   }
  for(int i=0;i<p;i++)
   {
     for(int j=0;j<l;j++)
     {
        printf("%d ",result[i][j]);
     }
   printf("\n");
   }
}

int main()
{
 int a[3][3],m,n,i,j,b[3][3],p,q;
 printf("enter the order of first matrix");
 scanf("%d %d",&m,&n);
 input(a,m,n);
 printf("enter the order of second matrix");
 scanf("%d %d",&p,&q);
 input(b,p,q);
 if(n==p)
  {
    mul(a,b,m,q,p);
  }
 else
    printf("multiplication not possible");
 

}
