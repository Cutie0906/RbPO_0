#include "Header.h"
void CreatePersons(int argc, char *argv[], struct Person persons[],
				   int Counter)
{
	for (int i = 0; i < Counter; i++)
	{
		persons[i].fn = malloc(sizeof(char) * 100);
		strcpy(persons[i].fn, "");
		persons[i].mn = malloc(sizeof(char) * 100);
		strcpy(persons[i].mn, "");
		persons[i].ln = malloc(sizeof(char) * 100);
		strcpy(persons[i].ln, "");
		persons[i].age = 0;
	}
	for (int i = 1, count = 0; i < argc; i++)
	{
		if (CompareStrings(argv[i], "-person") == 0)
			count++;
		else if (CompareStrings(argv[i], "--fn") == 0 && argv[i + 1][0] != '-')
			strcpy(persons[count - 1].fn, argv[i + 1]);
		else if (CompareStrings(argv[i], "--mn") == 0 && argv[i + 1][0] != '-')
			strcpy(persons[count - 1].mn, argv[i + 1]);
		else if (CompareStrings(argv[i], "--ln") == 0 && argv[i + 1][0] != '-')
			strcpy(persons[count - 1].ln, argv[i + 1]);
		else if (CompareStrings(argv[i], "--age") == 0 && argv[i + 1][0] != '-')
			persons[count - 1].age = atoi(argv[i + 1]);
	}
}
