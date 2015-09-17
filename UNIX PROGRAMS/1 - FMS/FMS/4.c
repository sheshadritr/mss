/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* OPEN - READ - WRITE - LSEEK - CLOSE  */

/* - open(2)  
   - read(2)
   - write(2)
   - lseek(2)
   - close(2)
*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main( )
{
	int fd;
	char buffer[BUFSIZ];
	int nbytes;
	if( (fd = open("./mss.txt", O_CREAT | O_RDWR | O_TRUNC, S_IRWXU | S_IRWXG | S_IRWXO)) < 0 )
	{
		perror ( "OPEN - 0" );
		exit(0);
	}

	
	while( (nbytes = read(STDIN_FILENO, buffer, BUFSIZ)) > 0 )
	{
		if( write(fd, buffer, nbytes) != nbytes )
		{
			perror ( "WRITE - 0" );
			exit(1);
		}	   
	}	
	
	if( nbytes < 0 )
	{
		perror( "READ - 0" );
		exit(2);
	}

	if(lseek( fd, 10, SEEK_SET ) < 0 )
	{
		perror( "LSEEK" );
		exit(3);
	}

	while( (nbytes = read( fd, buffer, BUFSIZ )) > 0 )
	{
		if( write( STDOUT_FILENO, buffer, nbytes) != nbytes )	
		{
			perror ("WRITE - 1");
			exit(4);
		}
	} 

	if ( nbytes < 0 )
	{
		perror( "READ - 1" );
		exit(5);
	}
	close(fd);
}


/* ASSIGNMENT: 
   1. How to determine current file offset ?
   2. What happens if we lseek beyond the number of characters in the file ?
*/
