
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* ERROR HANDLING FUNCTIONS */

/* - strerror(3) 
   - perror(3)
*/

#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

extern int errno;

int main( )
{
	int fd = open("NotPresent.txt", O_RDONLY);
	printf( "The error number is = %d\n", errno );

	return 0;
}
