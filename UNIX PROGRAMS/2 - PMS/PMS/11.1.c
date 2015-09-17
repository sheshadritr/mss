
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* EXECing  */


/* - execl(3)
   - execlp(3)
   - execle(3)
   - execv(3)
   - execvp(3)
   - execve(2)
*/

#include <stdio.h>
#include <unistd.h>

int main( int argc, char *argv[ ]  )
{
	int i;
	printf( "I overwrote the image \n" );	
	for( i = 0; i < argc; i++ )
	{
		printf( "argv[%d] = %s\n", i, argv[i] );
	}
}
