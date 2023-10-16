#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number and store it in n
    n = rand() % (2 * RAND_MAX) - RAND_MAX;

    // Print the random number
    printf("The number is: %d\n", n);

    // Check if the number is positive, zero, or negative
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
