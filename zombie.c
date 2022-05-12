#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{	
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		printf("I`m Zombie-process of Andrienko\n");
		_exit(0);
	}
	else 
		sleep(10);
		
return 0;
}
