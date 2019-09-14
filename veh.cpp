#include<iostream>
using namespace std;

class Vehicle
{
  public:
    Vehicle()
     {
       cout<<"This is a vehicle"<<endl;
     }
};

class FourWheeler
{
public:
 FourWheeler() 
 {
  cout<<"this is a 4 wheeler"<<endl;
 }
};

class Car:public Vehicle,public FourWheeler{

};

int main()
{
  Car obj;
  return 0;
}
