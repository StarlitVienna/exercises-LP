#include <stdio.h>

int main() {
    int values[10];
    int x;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%i", &values[i]);
    }

    scanf("%i", &x);

    for (int i = 0; i < 10; i++) {
        if (values[i] % x == 0) {
            printf("%i ", values[i]);
            count++;
        }
    }

    printf("\n number of multiples --> %i", count);

    return 0;
}
