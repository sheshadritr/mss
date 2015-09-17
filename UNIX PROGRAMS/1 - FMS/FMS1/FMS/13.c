/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* GETOPT  */


/* - getopt(3)  
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main( int argc, char *argv[ ] )
{
	int opt;
	printf( "OPTIND = %d\n", optind );
	
	while( (opt = getopt( argc, argv, "if:l:r")) != -1 )
	{
		switch( opt )
		{
			case 'i': 
			case 'l':
			case 'r':
				printf( "OPTION:%c\n", opt);
				break;
			case 'f':
				printf( "OPTION:%c and OPTION VALUE:%s\n", opt, optarg);
				break;
			case ':':
				printf( "OPTION needs a value\n");
				break;
			case '?':
				printf ("UNKNOWN OPTION:%c\n", optopt );
				break;
		}
	}
	for( ; optind < argc; optind++ )
		printf( "argument : %s\n", argv[optind] );
	
	printf( "OPTIND = %d\n", optind );
	exit(0);
				
}

