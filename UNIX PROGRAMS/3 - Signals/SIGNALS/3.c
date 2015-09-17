
/*
   Author : Subhash.K.U ( www.subhashku.com )
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
	int i;
	sigset_t block;
	signal(SIGINT,signal_handler);
	sigemptyset(&block);
	sigaddset( &block, SIGINT);
	if( sigismember( &block, SIGINT ))
	{
		for( i = 0; i < 100000; i++ )
		{
			printf( "SIGINT is a member signal\n");
		}
	}
	sigprocmask( SIG_BLOCK, &block, 0 );
	for( i = 0; i < 100000; i++ )
	{
		printf( "Hello World\n");
	}
	sigprocmask( SIG_UNBLOCK, &block, 0);

	for( i = 0; i < 100000; i++ )
	{
		printf( "World\n");
	}

	sigprocmask( SIG_SETMASK, &block, 0);
	for( i = 0; i < 1000000; i++ )	
	{
		printf( "Super world\n" );	
	}
	return 0;
}

void signal_handler( int signum )
{
	int i;
	printf( "I am in signal handler with signal number = %d\n", signum );
	for( i = 0; i < 100000; i++ )
	{
		printf( "Bye world\n" );
	}
}


