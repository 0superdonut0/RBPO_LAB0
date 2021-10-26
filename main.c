#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"


int main(int argc, char* argv[]) {
    system("chcp 1251");
    int personCount = 0;
    struct Person* arr = CreatePerson(argc, argv, &personCount);
    printf("Sort your table in ascending(0) or descending order(1)?\n");
    enum SortType sort;
    bool sd = true;
    while (sd)
    {
        scanf_s("%i", &sort);
        if (sort == 0 || sort == 1) sd = false;
        else printf("Error input. Expected 0 or 1. Try again\n");
    }
    Sort(arr, personCount, sort);
    Display(arr, personCount);
    return 0;
}