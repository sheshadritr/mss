/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* FCNTL */

/* - fcntl(2)  
*/


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


int main( )
{
	int accmode, flags, fd;

	if ((fd = open("./mss.txt", O_CREAT | O_RDONLY, S_IRWXU | S_IRWXG | S_IRWXO )) < 0 )
	{
		perror( "OPEN" );
		exit(0);
	}
	
	flags = fcntl( fd, F_GETFL, 0);

	accmode = flags  & O_ACCMODE;

	if( accmode == O_RDONLY )
		printf( "Read-Only set \n");	
	else if (accmode == O_WRONLY)
		printf( "Write-Only set\n" );
	else 
		printf( "Opened for Read-Write only \n" );

	if( flags & O_APPEND )
		printf( "Append flag set to the file first time itself\n" );
	else
		printf( "Append flag not set to the file first time\n" );

	fcntl( fd, F_SETFL, flags | O_APPEND );
	flags = fcntl( fd, F_GETFL, 0);
	
	if( flags & O_APPEND )
		printf( "Append flag set to the file second time\n" );
	else
		printf( "Append flag not set to the file second time too\n" );
}
