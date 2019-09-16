#include<iostream>
using namespace std;
static int count=-1;
class Batsmen
{
  int runs;
 public:
   Batsmen()
   {
     count++;
   }

  void score();
  void IPL();
  void ICC();
  void WC();
  void ODI();
};

void Batsmen()::score()
{
  IPL();
  ICC();
  WC();
  ODI();
}



