#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

extern char**environ;

int main(void)
{
	char* args[] = { "ls","-l",NULL };
	pid_t pid = fork();
	if(pid != 0)
	{
	printf("The child of Andrienko print next info:\n");
	execve("/bin/ls",args, environ);
	}
	else
	return EXIT_FAILURE;
return EXIT_SUCCESS;
}
