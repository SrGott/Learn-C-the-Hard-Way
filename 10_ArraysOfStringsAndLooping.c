#include <stdio.h>

int main( int argc, char *argv[] )
{
	
	int i;
	// go though each string in argv
	// why am I skipping argv[0]? Because ./a.out is an argument
	for( i = 1; i < argc; i++ )	{
			printf("Arg %d: %s\n", i, argv[i]);
	}

	char *states[] = { // char *str = "blah" VS char str[] = {'b','l','a','h'} 
		"Cali", "Oregon", "Washington", "Texas"
	};
	
	int num_states = 4;
	
	for( i = 0; i < num_states; i++) {
		printf("State %d: %s\n", i, states[i]);
	}
	
	return 0;
}
