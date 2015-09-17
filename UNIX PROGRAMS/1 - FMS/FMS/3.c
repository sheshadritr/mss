
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* RUN-TIME LIMITS CHECKING FUNCTIONS */

/* - sysconf(3)  
   - pathconf(3)
   - fpathconf(3)
*/


#include <unistd.h>
#include <stdio.h>

int main( )
{

	unsigned int MaxChildren;
	unsigned int ClockTicks;
	unsigned int MaxLinks;

	printf( "The current file name is   = %s\n", __FILE__ );
	printf( "The current line number is = %d\n", __LINE__ );
	printf( "The current Time is        = %s\n", __TIME__ );
	printf( "The current Date is        = %s\n", __DATE__ );
	
	#ifdef __STDC__
	{
		if( __STDC__ == 1 )
			printf( "Compiler confirms to ISO standards\n" );
	}
	#endif
		
	/*Gives System Configuration Run-Time limits */
	if((MaxChildren = sysconf( _SC_CHILD_MAX )) < 0 )
	{
		perror ("SYSCONF");
	}
	
	printf( "Maximum number of children = %u\n", MaxChildren );

	/*Gives System Configuration Run-Time limits */
	if((ClockTicks = sysconf( _SC_CLK_TCK )) < 0 )
	{
		perror( "SYSCONF" );
	}
	printf( "Maximum number of clock ticks = %u\n", ClockTicks );
	
	/*Gives File Configuration Run-Time limits */
	if( (MaxLinks = pathconf(__FILE__, _PC_LINK_MAX)) < 0 )
	{
		perror ("PATHCONF");
	}
	printf( "Maximum number of links for a file = %u\n", MaxLinks);
	
}

