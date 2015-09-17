/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* ls  */



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <fcntl.h>

void my_ls( const char * );
int main( )
{
	my_ls( "." );	
}

void my_ls(const char *name )
{
	DIR *dp;
	struct dirent *dir;
	struct stat fdetails;

	if( NULL ==  (dp = opendir( name )))
		return ;
	
	while ( dir = readdir(dp) )
	{
		if( !strcmp(dir->d_name,".")  || !strcmp(dir->d_name, ".."))	
		{
			continue;
		}
		printf("%s\t",dir->d_name);
	}
	printf( "\n" );
		
}

