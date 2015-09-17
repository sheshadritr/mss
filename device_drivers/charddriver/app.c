#include <stdio.h>

int main()
{
	FILE* fd;
	char arr1[20], arr2[20];
	printf("Hi world!\n");
	fd = fopen("/dev/scull", "r");
	if(fd != NULL)
	{
		printf("File open successful\n");

		fwrite("Hello File.", sizeof(char), 11, fd);
		fwrite("How is this code?", sizeof(char), 18, fd);

		fread(&arr1, sizeof(char), 11, fd);
		fread(&arr2, sizeof(char), 18, fd);

		printf("content of array1 = %s\n", arr1);
		printf("content of array2 = %s\n", arr2);

		printf("Closing file after read/write ops.\n");
		fclose(fd);
	}
	else
	{
		printf("Not able to open file\n");
	}
	printf("Bye World\n");

	return 0;
}
