#include <stdio.h>

int main( int argc, char *argv[] )
{

	int bugs = 100;
	double bug_rate = 1.2;
	
	printf("You have %d bugs at the rate of %f. \n", bugs, bug_rate );
	
	
	long uni_of_defects = 1L * 1024L * 1024L * 1024L;	// adding the L tells it to treat the int as a long 
	printf("The world has %ld bugs. \n", uni_of_defects);  //adding the l tells it to print it as a long dec
	
	// A signed integer can represent negative numbers; unsigned cannot.
	// Signed integers have undefined behavior if they overflow, while unsigned integers wrap around using modulo.
	
	unsigned long Unused = 1L * 8L;
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs. \n", expected_bugs);
	
	double part_of_universe = expected_bugs / uni_of_defects;
	printf("This is only a %e portion of the universe. \n", part_of_universe);
	
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	
	printf("Which means you should care %d%%.\n", care_percentage);

	return 0;
}
