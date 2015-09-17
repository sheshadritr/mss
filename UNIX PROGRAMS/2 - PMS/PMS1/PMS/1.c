
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* ENVIRONMENT VARIABLES */


/* - echo $HOME
   - echo $PATH
   - echo $SHELL
*/

#include <stdio.h>


int main( int argc, char *argv[ ], char *envp[ ])
{
	int i;
	for( i = 0; envp[i] != NULL; i++ )
	{
		printf( "%s\n", envp[i] );		
	} 
	return 0;
}
