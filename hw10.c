#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct {
    char name[20];
    char country[20];
    int population;
} City;
int main() {
    int i;
    City cities[3];
    printf("Input three cities:\n");
    for (i=0; i<3; i++) {
        printf("Name> ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        fflush(stdin);
        cities[i].name[strlen(cities[i].name) - 1] = 0;
        printf("Country> ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        fflush(stdin);
        cities[i].country[strlen(cities[i].country) - 1] = 0;
        printf("Population> ");
        scanf(" %d", &cities[i].population);
        fflush(stdin);
    }
    printf("Printing the three cities\n");
    for (i=0; i<3; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i+1, cities[i].name, cities[i].country, cities[i].population);
    }
    return 0;
}