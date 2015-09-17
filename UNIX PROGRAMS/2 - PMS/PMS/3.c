
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* GETTING AND SETTING ENVIRONMENT VARIABLES */


/* - getenv(3)
   - setenv(3)
   - putenv(3)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( )
{
	char string[20]; 

	printf( "%s\n", getenv("HOME"));

	strcpy( string, "HOME=/home/sumesh");

	putenv( string );

	printf( "%s\n", getenv("HOME"));

	setenv ("HOME", "/home/", 0 );	

	printf( "%s\n", getenv("HOME"));

	setenv ("HOME", "/home/", 1 );	

	printf( "%s\n", getenv("HOME"));
	
	
}
