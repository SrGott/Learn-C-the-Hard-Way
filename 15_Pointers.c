#include <stdio.h>

int main(int argc, char const *argv[])
{

  //create two arrays
  int ages[] = {23, 43, 12, 89, 2}; // 0 - 4 or 5
  char *names[] = { //2d array
    "Alan", "Frank", "Mary", "John", "Lisa"
  };

  // get the sizes of the ages
  int count = sizeof(ages) / sizeof(int); // it is 5 because the total size of the ages array / the int is 5
  printf("Count: %d\n", count);
  int i = 0;

  //first way using indexing
  for(i = 0; i < count; i++)  {
    printf("%s has %d years alive\n", names[i], ages[i]);
  }

  printf("---\n");

  //setup the pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names; // 2d array

  //second way using pointers
  for(i = 0; i < count; i++)  {
    printf("%s is %d years old. \n", *(cur_name + i), *(cur_age + i)); //read it as "the value of (pointer cur_name plus i)"
  }

  printf("---\n");

  //third way, pointers are just arrays
  for(i = 0; i < count; i++)  {
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");

  //fourth way with pointers in a stupid complex way
  for(cur_name = names, cur_age = ages;
        (cur_age - ages) < count; //Count is 5 | first loop cur_age - age = 0 > 5, second 1 > 5, ect
        cur_name++, cur_age++) //point to next part of the arrays
      {
        printf("%s lived %d years so far\n", *cur_name, *cur_age); //pointing to the pointer of cur which is being changed
      }

  return 0;
}
