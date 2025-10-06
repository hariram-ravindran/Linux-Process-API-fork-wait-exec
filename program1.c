#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
  int pid;
  pid=fork();
  if(pid == 0)
  {
    printf("Iam child my pid is %d\n",getpid());
    printf("My parent pid is:%d\n",getppid());
    exit(0);
  }
  else
  {
    printf("I am parent, my pid is %d\n",getpid());
    exit(0);
  }
}

