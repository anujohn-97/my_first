#include<iostream>
#include<string.h>
using namespace std;

class AddString
{
  public:
    char str[100];

  AddString()
  {
   }

  AddString(char str[])
   {
    strcpy(this->str, str);
   }

  AddString operator+(AddString& s2)
   {
      AddString s3;

     strcat(this->str, s2.str);
     strcat(s3.str,this->str);

     return s3;
   }
};

int main()
{

  char str1[]="Anu";
  char str2[]="John";
  AddString a1(str1);
  AddString a2(str2);
  AddString a3;

  a3=a1+a2;
  cout<<"Concatenation: "<<a3.str<<endl;
  return 0;
}
