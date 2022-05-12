#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler(int sig)
{
wait(0);
}

int main(void)
{	
	int n =1;
	signal(SIGCHLD, &sighandler);
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		fprintf(stdout, "Child of Andrienko is finished\n");
		_exit(0);
	}
	else 
		sleep(3*n);
		
return 0;
}
