/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* TIME - LOCALTIME - STRFTIME  */


/* -  time(2);
      localtime(3); 
      strftime(3); 
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main( )
{
	char date[25];
	struct tm *tm;
	time_t t;
	t = time(NULL);				
	tm = localtime(&t);
	
	strftime( date,25,"%F",tm); 
	printf( "Date = %s\n", date );
	
	
	
}

/*
 - ACCESS       TIME
 - CHANGE       TIME
 - MODIFICATION TIME

*/

/* ASSIGNMENT:

   1. utime(2)

*/ 
