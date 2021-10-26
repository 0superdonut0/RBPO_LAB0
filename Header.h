#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct Person {
	char* fn;
	char* mn;
	char* ln;
	unsigned int age;
};
enum SortType {
	asc,
	desc,
};

extern struct Person unknownPerson;
int CompareStrings(const char* lhs, const char* rhs);
struct Person* CreatePerson(int argc, char* argv[], int* personCount);
void Display(const struct Person* list, const int count);
void Sort(struct Person* persons, int count, const enum SortType sortType);

