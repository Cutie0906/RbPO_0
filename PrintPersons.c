#include "Header.h"
void PrintPersons(struct Person persons[], int Counter)
{
	printf("|--------------------|--------------------|--------------------|--------------------|\n");
	printf("|%20s|%20s|%20s|%20s|\n", "Familiya", "Imya", "Otchestvo", "Age");
	for (int i = 0; i < Counter; i++)
	{
		printf("|--------------------|--------------------|--------------------|--------------------|\n");
		printf("|%20s|%20s|%20s|%20d|\n", persons[i].fn, persons[i].ln,
			   persons[i].mn, persons[i].age);
	}
	printf("|--------------------|--------------------|--------------------|--------------------|\n");
}
