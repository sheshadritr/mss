
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* WAIT - Remove Zombies  */

/* wait(2) */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main( )
{
	int status;
	pid_t pid;
	int i;

	if (!fork( ))
	{
		for ( i = 0; i < 1000; i++ )
		{
			printf ("MindSculptor Systems Pvt. Ltd.\n");	
		}
		kill(getpid(),SIGKILL);	
	} 	
	else
	{	
		if( (pid = wait(&status)) < 0 )
		{
			perror("WAIT");
		}
		else
		{
			if(WIFSIGNALED(status))
			{
				printf( "PID %d got exited with %d\n", pid, WTERMSIG(status)); 
			}
		}
	}
}
