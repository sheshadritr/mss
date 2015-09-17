/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* DUP */

/* - dup(2)  
*/


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main( )
{
	int fd;
	int newfd;
	
	if ( (fd = open("./mss.txt", O_WRONLY | O_CREAT | O_TRUNC , S_IRWXU | S_IRWXG | S_IRWXO)) < 0 )
	{
		perror ("OPEN");
		exit(0);
	}		

	close(STDOUT_FILENO);
	
	newfd = dup(fd);


	if( write (STDOUT_FILENO, "Hello Darling", sizeof("Hello Darling")) != sizeof("Hello Darling") )
	{
		perror(	"WRITE" );
		exit(1);
	}	
	printf( "The newfd = %d\n", newfd );	

}
