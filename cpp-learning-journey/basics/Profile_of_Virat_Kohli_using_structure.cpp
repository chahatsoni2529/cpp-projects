#include <stdio.h>

// Define structure for a player profile
struct Player {
    char name[50];
    char role[50];
    char country[50];
    int age;
    int matches;
    int runs;
    float average;
};

int main() {
    struct Player virat;

    strcpy(virat.name, "Virat Kohli");
    strcpy(virat.role, "Batsman / Former Captain");
    strcpy(virat.country, "India");
    virat.age = 35;
    virat.matches = 500;
    virat.runs = 24940;
    virat.average = 53.8f;

    printf("\n--- Virat Kohli Profile ---\n");
    printf("Name       : %s\n", virat.name);
    printf("Role       : %s\n", virat.role);
    printf("Country    : %s\n", virat.country);
    printf("Age        : %d\n", virat.age);
    printf("Matches    : %d\n", virat.matches);
    printf("Runs       : %d\n", virat.runs);
    printf("Average    : %.2f\n", virat.average);

    return 0;
}
