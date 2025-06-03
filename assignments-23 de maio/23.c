#include <stdio.h>

int main() {
    float x[5];
    float y[5];
    float product = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &x[i]);
    }

    for (int i = 0; i < 5; i++) {
        scanf("%f", &y[i]);
    }

    for (int i = 0; i < 5; i++) {
        product += x[i] * y[i];
    }

    printf("vector x --> ");
    for (int i = 0; i < 5; i++) {
        printf("%f ", x[i]);
    }

    printf("\n vector y --> ");
    for (int i = 0; i < 5; i++) {
        printf("%f ", y[i]);
    }

    printf("\n product --> %f", product);

    return 0;
}
