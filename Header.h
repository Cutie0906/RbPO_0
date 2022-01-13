#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int CompareStrings(const char *lhs, const char *rhs);
struct Person
{
  char *fn,
       *mn,
       *ln;
  unsigned short age;
};
enum SortType
{
  Asc,
  Desc
};
void Sort(struct Person *persons, int count, enum SortType sortType);
void CreatePersons(int argc, char *argv[], struct Person persons[], int Counter);
void PrintPersons(struct Person persons[], int Counter);
