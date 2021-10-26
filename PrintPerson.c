#include "Header.h"

void Display(const struct Person* list, const int count) {
	puts("   _____________________________________________________________");
	printf("  %-12s %-12s %-12s %-12s %-12s", "|Number", "|First Name", "|Middle Name", "|Last Name", "|YOB      |\n");
	puts("   _____________________________________________________________");
	for (int i = 0; i < count; i++) {
		printf("  |%-11d |%-11s |%-11s |%-11s |%-9d|\n", i, list[i].fn, list[i].mn, list[i].ln, list[i].age);
		puts("   _____________________________________________________________");
	};
};