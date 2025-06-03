#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int numbers[10];

    printf("enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("prime numbers and their positions:\n");
    for (int i = 0; i < 10; i++) {
        if (isPrime(numbers[i])) {
            printf("number %d at position %d is prime.\n", numbers[i], i);
        }
    }

    return 0;
}
