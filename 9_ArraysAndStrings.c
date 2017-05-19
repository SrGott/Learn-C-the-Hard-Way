#include <stdio.h>

int main()
{
	
	int num[4] = { 0 };
	char name[4] = { 'a' };
	
	
	// print out Numbers and Name Raw without any data
	printf("Numbers: %d %d %d %d\n", num[0], num[1], num[2], num[3]);
	printf("Name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("Name part 2: %s\n", name);
	
	//setup and enter in values
	
	num[0] = 1;
	num[1] = 2;
	num[2] = 3;
	num[3] = 4;
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	
	puts("Data Entered");
	
	//Now print out the Numbers and name with data in the fields 
	
	printf("Numbers: %d %d %d %d\n", num[0], num[1], num[2], num[3]);
	printf("Name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("Name part 2: %s\n", name);
	
	return 0;
	
}
