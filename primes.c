#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int div = 2; div * div <= number; div++) {
        if (number % div == 0) return false;
    }
    return true;
}

int main() {
    printf("C program to get Prime numbers.\n");
    printf("Enter the range: >>>");
    int num_range;
    scanf("%d", &num_range);

    clock_t tm1, tm2;
    tm1 = clock();

    int i = 0;
    printf("\n");
    for (int num = 2; num <= num_range; num++) {
        if (isPrime(num)) {
            i++;
            printf("%*d --> prime   | %d\n", (int)(1 + log10(num_range)), num, i);
        }
    }

    tm2 = clock();

    printf("Time: %f seconds\n", (double)(tm2 - tm1) / CLOCKS_PER_SEC);
    printf("Quit after 60 seconds\n");
    sleep(60);

    return 0;
}
