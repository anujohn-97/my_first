#include<iostream>
using namespace std;

class Player
{
private:
  int runs;
  int wickets;
public:
  
  Player(int r,int w)
   {
     runs=r;
     wickets=w;
   }
  Player(const Player &p2,int w=0)
   {
      runs=p2.runs;
      wickets=w;
   }

  int getRuns()
   {
     return runs;
   }
  int getWickets()
   {
      return wickets;
   }
};

int main()
{
  Player p1(304,4),p2(305,78),p3(356,60);
Player p4=p1,p5=p2,p6=p3;
cout<<"Player 1"<<endl<<"Runs: "<<p1.getRuns()<<" Wickets : "<<p1.getWickets()<<endl;
cout<<"Player 2"<<endl<<"Runs: "<<p2.getRuns()<<" Wickets : "<<p2.getWickets()<<endl;
cout<<"Player 3"<<endl<<"Runs: "<<p3.getRuns()<<" Wickets : "<<p3.getWickets()<<endl;
cout<<"Player 4"<<endl<<"Runs: "<<p4.getRuns()<<" Wickets : "<<p4.getWickets()<<endl;
cout<<"Player 5"<<endl<<"Runs: "<<p5.getRuns()<<" Wickets : "<<p5.getWickets()<<endl;
cout<<"Player 6"<<endl<<"Runs: "<<p6.getRuns()<<" Wickets : "<<p6.getWickets()<<endl;
} 
  
