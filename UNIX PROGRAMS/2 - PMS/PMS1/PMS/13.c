
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
	union byte
	{
		char byte[4];
		int number;
	};
	union byte b;

	if (!fork( ))
	{
		for ( i = 0; i < 1000; i++ )
		{
			printf ("MindSculptor Systems Pvt. Ltd.\n");	
		}
		exit(6);
	} 	
	else
	{	
		if( (pid = wait(&status)) < 0 )
		{
			perror("WAIT");
		}
		else
		{
			b.number = status;
			printf( "The Process %u exited with the status %x\n", pid,b.byte[0]  );		
			printf( "The Process %u exited with the status %x\n", pid,b.byte[1]  );		
			printf( "The Process %u exited with the status %x\n", pid,b.byte[2]  );		
			printf( "The Process %u exited with the status %x\n", pid,b.byte[3]  );		
		}
	}
}


/* ASSIGNMENT

1. Work on waitpid(2)

*/
