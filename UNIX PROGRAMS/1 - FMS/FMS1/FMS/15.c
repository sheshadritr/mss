/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* MMAP  */


/* - mmap(2);
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/mman.h>

int main( )
{
	char buffer[30] = "----------------------------";    
	char *mapped;
	int fd;
	if( (fd = open( "./mss.txt", O_CREAT | O_RDWR , S_IRWXU | S_IRWXG | S_IRWXO )) < 0  )	
	{
		perror( "OPEN" );
		exit(0);
	}

	if( (write(fd, buffer, strlen(buffer))) != strlen(buffer))
	{
		perror ("WRITE");
	}	

	mapped = (char *)mmap( 0, strlen(buffer), PROT_WRITE, MAP_SHARED, fd, 0 );  

	mapped[18] = 'S';

	munmap( mapped, strlen(buffer));			
}
