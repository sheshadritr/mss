
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SYSTEM  */

/* system(3) */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main( )
{
	if( system("ls -l") < 0 )
	{
		perror ("SYSTEM" );
	}	
	return 0;
}


/* ASSIGNMENT:

1. Implement your own system(3) function and call it my_system(3) function */

Note: Refer Richard Stevens

int my_system( const char * cmdstring )
{
	pid_t pid;
	int   status;

	if( cmdstring == NULL )
	{
		return 1;
	}
	
	if( (pid = fork( )) < 0 )
	{
		status = -1;
	} 
	else if ( pid == 0 )
	{
		execl( "/bin/sh", "sh", "-c", cmdstring, (char *)0);
		_exit(127);
	}
	else
	{
		while( waitpid( pid, &status, 0) < 0 )
		{
			if( errno != EINTR)
			{
				status = -1;
				break;
			}
		}
	
	}
	return (status);
}

