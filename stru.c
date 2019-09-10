#include<stdio.h>

struct employee
{
  char name[20];
  int age;
  float salary;
};
void main()
{
 struct employee e1;
 printf("enter employee name:\n");
 scanf("%s",e1.name);
 printf("enter employee age:\n");
 scanf("%d",&e1.age);
 printf("enter employee salary:\n");
 scanf("%f",&e1.salary);

 printf("%s %d %f\n",e1.name,e1.age,e1.salary);
}
