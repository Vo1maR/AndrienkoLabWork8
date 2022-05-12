#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

static void sig_usr(int signo)
{ 
	if(signo == SIGUSR2)
		printf("Process of Andrienko got signal");
}

int main(void)
{
	printf("My PID = %d. Waiting for SIGUSR2 signal\n",getpid());
	for ( ; ; )
	pause();
return EXIT_SUCCESS;
}
