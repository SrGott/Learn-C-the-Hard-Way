#include <stdio.h>
#include <assert.h> //needed for the assert command: https://en.wikipedia.org/wiki/Assert.h
#include <stdlib.h>
#include <string.h>

struct Person { //creating a structure that has the 4 elements to describe a person
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
  struct Person *who = malloc(sizeof(struct Person)); //Make who with the info and size from Person
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  free(who->name);
  free(who); // frees the data from who
}

void Person_print(struct Person *who)
{
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age); // \t stands for tab
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
  //make two people structs
  struct Person *joe =  Person_create("Joe Alex", 32, 64, 140);

  struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

  //print them out and where they are in memory
  printf("Joe is at Memory Location %p: \n", joe);
  Person_print(joe);

  printf("Frank is at Memory Location %p: \n", frank);
  Person_print(frank);

  //make everyone age 20 and print them out again
  joe->age += 20;
  joe->height -= 2;
  joe->weight += 40;
  Person_print(joe);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);

  //destroy them both
  Person_destroy(joe);
  Person_destroy(frank);


  return 0;
}
