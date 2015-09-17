
/*
   Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SLEEP implementation - call it my_sleep(3)*/

/*
 - alarm(2)
 - pause(2)
*/

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void wake_up( )
{
	//Dummy function doing nothing	
}
unsigned int my_sleep( unsigned int count_timer)
{
	struct sigaction new_action;
	new_action.sa_handler = wake_up;
	new_action.sa_flags = 0;
	sigemptyset(&new_action.sa_mask);

	if( sigaction(SIGALRM, &new_action, 0) == -1 )
	{
		perror( "SIGACTION");
		return -1;
	}
	alarm(count_timer);
	pause();
	return 0;
}

int main( )
{
	printf(" I am in main function before my_sleep\n" );
	my_sleep(5);
	printf(" I am in main function after my_sleep\n" );
}



