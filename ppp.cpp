#include<iostream>
using namespace std;

class Parent
{
  protected:
    int id_pro;
};

class Child:public Parent
{
  public:
    void setId(int id)
     {
	id_pro=id
     }
};



int main()
{
   Child obj1;
   obj1.id_c=7;
   obj1.id_p=91;
   cout<<"Child id is"<<obj1.id_c<<endl;
   cout<<"Parent id is"<<obj1.id_p<<endl;
   return 0;
}
