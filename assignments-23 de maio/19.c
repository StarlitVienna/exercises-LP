#include <stdio.h>

int main() {
    int values[50];

    for (int i = 0; i < 50; i++) {
        values[i] = (i + 5 * i) % (i + 1);
    }

    for (int i = 0; i < 50; i++) {
        printf("%i ", values[i]);
    }

    return 0;
}
