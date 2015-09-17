
/*
   Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SIGACTION */


/* 
	- sigaction(2) 
*/

#include <stdio.h>
#include <signal.h>

void signal_handler(int );
int main( )
{
	sigset_t sigmask;
	struct sigaction new_action, old_action;
	sigemptyset( &new_action.sa_mask);
	sigaddset( &new_action.sa_mask, SIGQUIT);
	new_action.sa_flags = 0;
	new_action.sa_handler = signal_handler;

	sigaction( SIGINT, &new_action, 0 );	
	while(1);
}

void signal_handler( int signum )
{
	while(1)
	{
		printf( "Caught signal %d\n", signum );
	}
}


