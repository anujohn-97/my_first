#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  cout<<"Enter 2 integers ";
  cin>>num1>>num2;
  if(num1==num2)
   cout<<num1<< "equal to" <<num2<<"\n";
  if(num1!=num2)
   cout<<num1<< "not equal to" <<num2<<"\n";
  if(num1>num2)
   cout<<num1<< "greater than "<<num2<<"\n";
  if(num1<num2)
   cout<<num1<< "less than "<<num2<<"\n";
  if(num1>=num2)
   cout<<num1<< "greater than or equal to"<<num2<<"\n";
  if(num1<=num2)
   cout<<num1<< "less than or equal to"<<num2<<"\n";
  return 0;
}
