
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* PROCESS TERMINATION */


/* - exit(3)
   - _exit(2)
   - atexit(3)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exit_handler_1(void);
void exit_handler_2(void);

int main( )
{
	atexit(exit_handler_2);
	atexit(exit_handler_1);
	printf("I am  in main function\n");
	exit(0);
}

void exit_handler_1( )
{
	printf ( "I am in exit handler 1\n" );
}

void exit_handler_2( )
{
	printf ( "I am in exit handler 2\n" );
}
