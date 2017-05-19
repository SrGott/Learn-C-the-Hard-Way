#include <stdio.h>

int main(int argc, int *argv[])	{

	int i = 0;
	
	if(argc == 1)	{

		puts("You need at least 2 arguments.");	
	}
//	else if (argc > 0 && argc < 4)	{
	else if (argc > 1 && argc < 4)	{ //Extra Credit fix to change it to 1, originally 0
		printf("Here are your arguments: \n");
		
		for( i = 1; i < argc; i++)	{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else
	{
		puts("You have too many arguments");
			
	}
	
	return 0;
}
