
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* FORKing  */


/* - fork(2)
*/

#include <stdio.h>
#include <unistd.h>

int main( )
{
	pid_t pid;
	if( (pid = fork( )) == 0 )
	{
		printf( "I am in child process\n");
		printf( "My PID  is = %d\n",  getpid( ));
		printf( "My PPID is = %d\n", getppid( ));
	}
	else
	{
		sleep(2);
		printf( "I am in parent process\n" );
		printf( "My PID  is = %d\n",  getpid( ));
		printf( "My PPID is = %d\n", getppid( ));
				
	}
}

/* ASSIGNMENT:

1. What is the difference between fork(2) and vfork(2) ?

*/
