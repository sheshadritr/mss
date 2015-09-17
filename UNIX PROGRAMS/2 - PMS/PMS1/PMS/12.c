
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* ZOMBIES  */


#include <stdio.h>
#include <unistd.h>

int main( )
{
	pid_t pid;
	int i;

	if( (pid = fork()) == 0 )
	{
		for( i = 0; i < 100000; i++ )
		{
			printf("MindSculptor Systems Pvt. Ltd\n" );
		}
	}	
	else
	{
		for( i = 0; i < 300000; i++ )
		{
			printf("TeachGuru Foundation\n" );
		}
		while(1);
	}
	
}
