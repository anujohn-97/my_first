#include<iostream>
using namespace std;
#define PI 3.14

class Shape
{
  int side;
  int length;
  int breadth;
  int radius;
 
  
 public:
   Shape(int l=1,int b=1)
    {
      length=l;
      breadth=b;
      cout<<"\nArea of rectangle="<<length*breadth;

    }
   Shape(double s=1)
   {
      side=s;
      cout<<"\nArea of square="<<side*side;
    }

   Shape(float r=1)
    {
      radius=r;
      cout<<"\nArea of circle="<<(PI*radius*radius);
    }
 
};

int main()
{
  Shape s1(5.4);

  Shape s2(4.0f);
  
  Shape s3(5,6);
 
  return 0;
}
  
