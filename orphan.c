
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
    int n=6;
    pid_t pid;
    pid = fork();
    int j;
    if (pid != 0)
    {
               sleep(n+1);
               _exit(0);
    }

    else
     {
       for (j=0; j<(2*n+1); j++)
           {
               printf("Parent of Sauliak %d\n",getppid());
               sleep(1);
           }


    }
 return 0;
}
