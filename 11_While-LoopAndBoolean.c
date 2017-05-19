#include <stdio.h>

int main(int argc, char **argv)
{

	//go though each string in argv

	int i = 0;
	int num_states = 4;


	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}


	//let's make our won array of strings
	char *states[] = {
		"Cali", "Oregon", "Wash", "Texas"
	};


	i = 0;
	while( i < num_states )	{

		printf("State %d: %s\n", i, states[i]);
		i++;
	}

	puts("Extra Credit"); //Extra Credit


	i = argc--;

	while( i > -1) {
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}

	i = 3;

	while( i >= 0 )	{

		printf("State %d: %s\n", i, states[i]);
		i--;
	}

	//int k = 4; cant do that because of the fact the array is set at 4 char inputs
	i = 0;
	while(i <= 4)	{

		states[i] = argv[i];
		i++;
		//k++;
	}

	i = 0;
	while( i <= num_states )	{

		printf("EXTRA CREDIT 2: State %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
