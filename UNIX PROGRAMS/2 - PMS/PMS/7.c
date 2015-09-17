
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SETJMP and LONGJMP */


/* - setjmp(3)
   - longjmp(3)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>


void fun1( );
void fun2( );
void fun3( );

jmp_buf buffer;
int main( )
{
	int val;
	if( !(val = setjmp(buffer)) )
	{
		printf( "Called  setjmp for the very first time\n" );
		fun1( );
	} 
	else
		printf( "Called setjmp after a long jump with value = %d\n", val );
}

void fun1( )
{
	int val = setjmp(buffer);
	printf( "%d\n", val );
	printf( "I am in func1\n" );
	fun2( );
}

void fun2( )
{
	printf( "I am in func2\n" );
	fun3( );
}

void fun3( )
{
	printf( "I am in func3\n" );
	longjmp(buffer, 1);
}
