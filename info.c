#include <stdio.h>
#include <unistd.h>

int main(void)
{
        fprintf(stderr, "Here`s process!\n");
        fprintf(stderr, "Process group id: %d\n", getpgrp());
        fprintf(stderr, "Process PID: %d\n", getpid());
        fprintf(stderr, "Process PPID: %d\n", getppid());
	fprintf(stderr, "Process User ID: %d\n", getuid());
	fprintf(stderr, "Process User`s group ID: %d\n", getgid());
return 0;
}
