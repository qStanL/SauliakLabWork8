#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler (int signal)
{
       wait(0);
}

int main (void)
{
   int n = 5;
   signal(SIGCHLD, &sighandler);
   pid_t pid = fork();
   if (pid == 0)
    {
              fprintf(stdout, "Child of Sauliak is finished\n");
              _exit(0);
  }
    else
  {
       fprintf(stdout, "Parent start\n");
       sleep(3*n);
       fprintf(stdout, "Parent finished\n");
  }
     return EXIT_SUCCESS;
}
