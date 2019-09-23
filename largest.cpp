#include<iostream>
using namespace std;

int maximum(int,int,int);

int main()
{
  int a,b,c;

  cout<<"enter three integers";
  cin>>a>>b>>c;

  cout<<"maximum is"<<maximum(a,b,c)<<endl;
}

int maximum(int a,int b, int c)
{
 /* int max=x;
  if(y>max)
    max=y;
  if(z>max)
    max=z;*/
  
  int x=(a<b)?(a<c?a:c):(b<c?b:c);

  return x;
}
