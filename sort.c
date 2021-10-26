#include "Header.h"

void Sort(struct Person* persons, int count, const enum SortType sortType)
{
	struct Person personA;
	for (int min = 0; min < count - 1; ++min) {
		int least = min;
		for (int j = min + 1; j < count; ++j) {
			if (CompareStrings(persons[j].fn, persons[least].fn) < 0)
				least = j;
			else if (CompareStrings(persons[j].ln, persons[least].ln) < 0 && CompareStrings(persons[j].fn, persons[least].fn) == 0)
				least = j;
			else if (CompareStrings(persons[j].mn, persons[least].mn) < 0 && CompareStrings(persons[j].ln, persons[least].ln) == 0)
				least = j;
			else if (persons[j].age <= persons[least].age && CompareStrings(persons[j].mn, persons[least].mn) == 0)
				least = j;
		}
		personA = persons[min];
		persons[min] = persons[least];
		persons[least] = personA;
	}
	if (sortType == desc) {

		for (int i = 0, k = count - 1; i < count - 1; ++i)
		{
			personA = persons[k];
			persons[k] = persons[i];
			persons[i] = personA;
			--k;
		}
	}
}