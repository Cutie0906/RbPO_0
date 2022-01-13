#include "Header.h"
int main(int argc, char *argv[])
{
	int Counter = 0;
	for (int i = 1; i < argc; i++)
		if (CompareStrings(argv[i], "-person") == 0)
			Counter++;
	struct Person persons[Counter];
	CreatePersons(argc, argv, persons, Counter);
	printf("%s\n",
		   "Choose the way to sort: ascending (1) or descending (0)");
	fflush(NULL);
	char ans[100];
	scanf_s("%s", ans);
	if (CompareStrings(ans, "1") == 0)
		Sort(persons, Counter, Asc);
	else if (CompareStrings(ans, "0") == 0)
		Sort(persons, Counter, Desc);
	else
	{
		printf("%s\n%s\n", "Wrong input", "Stopping the program...");
		return 0;
	}
	PrintPersons(persons, Counter);
	system("pause");
	return 0;
}
