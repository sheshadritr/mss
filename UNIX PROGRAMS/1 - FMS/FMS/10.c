/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* STAT  - LSTAT - FSTAT */


/* - stat(2)  
   - lstat(2)
   - fstat(2)
*/

/* 
struct stat {
               dev_t     st_dev;     // ID of device containing file 
               ino_t     st_ino;     // inode number 
               mode_t    st_mode;    // protection 
               nlink_t   st_nlink;   // number of hard links 
               uid_t     st_uid;     // user ID of owner 
               gid_t     st_gid;     // group ID of owner 
               dev_t     st_rdev;    // device ID (if special file) 
               off_t     st_size;    // total size, in bytes 
               blksize_t st_blksize; // blocksize for file system I/O 
               blkcnt_t  st_blocks;  // number of 512B blocks allocated 
               time_t    st_atime;   // time of last access 
               time_t    st_mtime;   // time of last modification 
               time_t    st_ctime;   // time of last status change 
           };
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main( int argc, char *argv[ ])
{
	struct stat obj;

	if( argc != 2 )
	{
		fprintf( stderr, "USAGE: <a.out> <file/directory>\n");
		exit(0);
	}
	if (stat( argv[1] , &obj ) < 0 )
	{
		perror( "STAT" );	
		exit(1);
	}	
	
	printf ("The inode of the file %s is %u\n", argv[1], obj.st_ino );

	if ( S_ISREG(obj.st_mode) )
		printf( "%s is a regular file\n", argv[1] );		
	else if ( S_ISDIR( obj.st_ino) )	
		printf( "%s is a directory file\n", argv[1] );


	if ( (obj.st_mode & S_IFMT ) == S_IFREG ) 
		printf( "%s is a regular file\n", argv[1] );		
	else if ((obj.st_mode & S_IFMT) == S_IFDIR )
		printf( "%s is a directory file\n", argv[1] );
			
	if( (obj.st_mode & S_IFMT) == S_IRGRP )
		printf( "%s has READ FOR GROUP", argv[1] );

	if ( (obj.st_mode & S_ISUID) == S_ISUID )
		printf( "%s has SET USER ID BIT ON\n",  argv[1] );		
	else
		printf( "%s has SET USER ID BIT OFF\n",  argv[1] );		
		
}



/* How to set UID bit for your fle ? Ans: chmod u+s file1 or chmod 4750 file1 */

/* Notice the CAPITAL 'S' and small 's' in the file */

/*ASSIGNMENT:
  1. chown(2), chmod(2) 
*/
