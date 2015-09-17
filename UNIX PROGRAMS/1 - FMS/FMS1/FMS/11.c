/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* HOLES */




#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main( )
{	
	int fd;
	if( (fd = open("./mss.txt", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU | S_IRWXG | S_IRWXO )) < 0 )
	{
		perror( "OPEN" );
		exit(0);
	}		

	if( write( fd, "Hello Darling", sizeof("Hello Darling") ) != sizeof("Hello Darling"))
	{
		perror( "WRITE - 0" );
		exit(1);
	} 

	lseek( fd, 20000, SEEK_CUR );

	if( write( fd, "Hello Boss", sizeof("Hello Boss")) != sizeof("Hello Boss"))
	{
		perror( "WRITE - 1" );
		exit(1);
	} 

}



