/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* UMASK */


/* - umask(2)  
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


int main( )
{
	int fd;
	
	if( ( fd = open ("./mss.txt", O_RDONLY | O_CREAT , S_IRWXU | S_IRWXG | S_IRWXO )) < 0 )
	{
		perror ("OPEN");
		exit(0);
	}
	
	umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH );
	
	if( ( fd = open ("./sku.txt", O_RDONLY | O_CREAT , S_IRWXU | S_IRWXG | S_IRWXO )) < 0 )
	{
		perror ("OPEN");
		exit(0);
	}
}
