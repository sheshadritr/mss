
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

int main( )
{
	printf( "I will get printed\n" );	
	execl( "./11.1", "11.1", "subhash", "santosh", "vinay", NULL );
	printf( "I will not get printed\n" );	
}
