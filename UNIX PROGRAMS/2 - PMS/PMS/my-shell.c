
/* Author : Subhash.K.U ( www.subhashku.com )
 * Copyright (C) MindSculptor Systems Pvt. Ltd (www.mindsculptorsys.com)
 */

/* SHELL Implementation  */

/* system(3) */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main( )
{
	char command[BUFSIZ];
	pid_t pid;
	int status;

	printf( "> " );
	while((fgets(command, BUFSIZ, stdin)) != NULL )
	{
		if( command[strlen(command) - 1] == '\n' )
			command[strlen(command) - 1] = 0;

		if( !strcmp(command,"exit" ) )
		{
			exit(0);
		}

		if( (pid = fork()) < 0 )
		{
			perror ("FORK");
			exit(1);
		}
		else if( pid == 0 )
		{ 
			execlp( command, command, (char *)0);
			perror ("EXECL");
			exit(127);	
		}
		if ((pid = waitpid( pid, &status, 0 )) < 0 )
		{
			perror("WAITPID");	
			exit(2);
		}
		printf( "> ");
	}
	exit(0);
}
