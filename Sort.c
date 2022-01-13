#include "Header.h"
void Sort(struct Person *persons, int count, enum SortType sortType)
{
	for (int min = 0; min < count - 1; min++)
	{
		int least = min;
		for (int j = min + 1; j < count; j++)
			if (CompareStrings(persons[j].fn, persons[least].fn) == -1)
				least = j;
			else if (CompareStrings(persons[j].fn, persons[least].fn) == 0)
				if (CompareStrings(persons[j].ln, persons[least].ln) == -1)
					least = j;
				else if (CompareStrings(persons[j].ln, persons[least].ln) == 0)
					if (CompareStrings(persons[j].mn, persons[least].mn) == -1)
						least = j;
					else if (CompareStrings(persons[j].mn, persons[least].mn) == 0)
						if (persons[j].age <= persons[least].age)
							least = j;
		struct Person tmp = persons[min];
		persons[min] = persons[least];
		persons[least] = tmp;
	}
	struct Person t;
	if (sortType == Desc)
		for (int i = 0; i < count / 2; i++)
		{
			t = persons[i];
			persons[i] = persons[count - i - 1];
			persons[count - i - 1] = t;
		}
}
