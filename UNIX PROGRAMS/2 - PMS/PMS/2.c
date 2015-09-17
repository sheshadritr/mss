
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* ENVIRONMENT VARIABLES */


/* 
	- environ(7) 

*/

#include <stdio.h>


int main( )
{
	extern char **environ;
	int i;
	
	for( i = 0; environ[i] != NULL; i++ )
	{
		printf( "%s\n", environ[i] );
	}
	return 0;
}
