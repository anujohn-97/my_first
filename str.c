#include<stdio.h>
#include<string.h>
int main()
{
char p[]="workstation";
char q[]="st";
char* r;
r=strstr(p,q);
printf("%s",r);

}
