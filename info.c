#include <stdio.h>
#include <unistd.h>

int main(void)  {
        fprintf(stderr, "Process group id: %d\n", getpgrp());
        fprintf(stderr, "Process PID: %d\n", getpid());
        fprintf(stderr, "Process PPID: %d\n", getppid());
        fprintf(stderr, "Process user id: %d\n", getuid());
        fprintf(stderr, "Process user`s group id: %d\n", getgid());
return 0;
}
