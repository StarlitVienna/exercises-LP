#include <stdio.h>

int main() {
    float values[10];

    for (int i = 0; i < 10; i++) {
        scanf("%f", &values[i]);
        if (values[i] < 0) {
            values[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%f ", values[i]);
    }

    return 0;
}
