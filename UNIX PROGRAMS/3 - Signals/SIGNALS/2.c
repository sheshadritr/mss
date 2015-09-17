
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SIGNAL */


/* 
	- signal(2) 
*/

#include <stdio.h>
#include <signal.h>

void signal_handler(int );
int main( )
{
	//signal( SIGKILL, signal_handler);
	signal( SIGSTOP, signal_handler);
	while(1);
}

void signal_handler( int signum )
{
	printf( "I am in signal handler with signal number = %d\n", signum );
}
