#include <stdio.h>

int main( int argc, char *argv[])
{

	int distance = 100; // can store the range of [−32,768, +32,767]
	float power = 2.345f;
	double super_power = 25324.35232;
	
	/*
	Don't forget about long
	Long can store up to [−2,147,483,648, +2,147,483,647] 
	*/
	long Unused = 1L * 100L;
	
	
	/*
	The float and double use diffrent levels of precision
	Float has a single precision of 23 bits, 8 exponents and 1 sign bit;
	Double has a double precision of 52 bits, 11 exponents and 1 sign bit  
	
	Double is better than Float at everything but huge numbers with large floating points
	
	*/
	
	
	char initial = 'S';
	char first_name[] = "Billy";
	char last_name[] = "Bob";
	
	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f super powers. \n", super_power);
	printf("Initial is %c. \n", initial);
	printf("The first and last name are: %s %s. \n", first_name, last_name);
	
	return 0;
	
}
