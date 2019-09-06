#include<stdio.h>


int input(int a[][3],int m,int n)
{
  for(int i=0;i<m;i++)
   {
     for(int j=0;j<n;j++)
      {
	scanf("%d ",&a[i][j]);
      }
   }
}


int main()
{
  int a[3][3],m,n,b[3][3],p,q;
  printf("enter order of first matrix \n");
  scanf("%d %d",&m,&n); 
  printf("enter the elememts");
  input(a,m,n);


}
