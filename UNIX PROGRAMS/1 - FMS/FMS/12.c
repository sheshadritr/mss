/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* MKDIR - RMDIR - CHDIR - OPENDIR - READDIR */


/* - mkdir(3)  
   - rmdir(3)_
   - opendir(3)
   - readdir(3)
*/

 
/*

struct dirent 
{
        ino_t          d_ino;       // inode number 
        off_t          d_off;       // offset to the next dirent 
        unsigned short d_reclen;    // length of this record 
        unsigned char  d_type;      // type of file; not supported
                                       by all file system types 
        char           d_name[256]; // filename 
};

*/
	

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>


int main( )
{
	DIR *dp;
	struct dirent *dir;

	if( (dp = opendir(".")) == NULL )
	{
		perror ("OPENDIR");
		exit(0);
	}
	
	while( (dir = readdir(dp) ) != NULL )
	{
		
		printf ( "The name of the file is = %s and its inode number is = %u\n", dir->d_name, dir->d_ino );
	}
	closedir(dp);	
	exit(0);

}


/* ASSIGNMENT :
   1. man 3 chdir
*/
