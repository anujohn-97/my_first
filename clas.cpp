#include<iostream>
using namespace std;

class Employee
{

 private:
  char name[30];
  char employee_code;
  double basic_salary;
  double sales;

public:
  Employee();
  void setData(char,char,double,double);
  void printFixed();
  void printIncentive();
  
};

Employee::Employee()
{
  name="abc";
  employee_code="0000";
  sales=0;
  basic salary=0;
 
}

Employee::setData(char n,char c,double s,double sa)
{
  name=n;
  employee_code=c;
  sales=s;
  basic salary=sa;
}

void Employee::printFixed()
{
  double ctc;
  ctc = basic_salary;
  cout<<ctc;







 hra=0.30*basic_salary;
 tot=hra+basic_salary;
 
 if(tot>500000)
 {
  ctc=ctc+100000;

}


void main()
{
 Employee e1;
 Employee e2;

}

 
