#include <stdio.h>

void printQ52Pattern() {
    int rows = 5;
    printf("Q52 Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        // Inner loop starts printing from (rows - i + 1) up to 'rows'
        for (int j = (rows - i + 1); j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
