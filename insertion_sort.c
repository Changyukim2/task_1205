#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int weight;
    int height;
} Person;

void insertion_sort(Person list[], int n) {
    int i, j;
    Person key;
    for (i = 1; i < n; i++) {
        key = list[i];
        j = i - 1;

        while (j >= 0 && list[j].weight > key.weight) {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = key;
    }
}

int main(void) {
    int i;
    int n = MAX_SIZE;
    Person people[MAX_SIZE] = {
        {3, 120}, {5, 130}, {19, 150}, {4, 120}, {20, 180},
        {11, 120}, {7, 120}, {35, 300}, {1, 111}, {6, 165}
    };

    insertion_sort(people, n);

    printf("¸ö¹«°Ô: ");
    for (i = 0; i < n; i++)
        printf("%d ", people[i].weight);

    printf("\nÅ°: ");
    for (i = 0; i < n; i++)
        printf("%d ", people[i].height);

    printf("\n");

    return 0;
}
