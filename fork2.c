#include<stdio.h>
#include<unistd.h>

int gvar=555;
int main()
{
  int lvar=54;
  int cpid=fork();
if(cpid==0)
   printf("Iam child process with process id=%ld,gvar=%d,lvar=%d a\n",         (long)getpid(),gvar,lvar);

else
   printf("Iam parent process with process id=%ld,gvar=%d,lvar=%d a\n",         (long)getpid(),gvar,lvar);

return 0;
}
