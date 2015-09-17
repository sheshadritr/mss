/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* Implementing "mv" command  using LINK - UNLINK */


/* - link(2)  
   - unlink(2)  
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main( int argc, char *argv[] )
{
	if( argc < 3 || argc > 3 )
	{
		fprintf( stderr , "USAGE: <a.out> <file1> <file2>\n" );
		exit(0);
	}

	if( link (argv[1], argv[2]) < 0 )
	{
		perror ("LINK");
		exit(1);
	}

	if( unlink(argv[1]) < 0)
	{
		perror ( "UNLINK" );
		exit(2);
	}
}


/* ASSIGNMENT:
   1. Why 'ln' command cannot cross file systems ?
*/ 
