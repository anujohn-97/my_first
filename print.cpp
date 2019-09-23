#include<iostream>
using namespace std;
static int x=1;

class N
{
 public:  
   N()
  {
    cout<<x<<endl;
    x++;
  }
};
int main()
{
 N obj[100];
 return 0;
}
