/*
   Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SIGNAL */


/*
        - signal(2)
*/

#include <stdio.h>
#include <signal.h>


int main( )
{
	signal(SIGQUIT, SIG_IGN);
	while(1);
}
