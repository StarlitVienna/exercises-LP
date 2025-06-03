#include <stdio.h>

int main() {
    int A[10];
    int B[10];
    int C[10];

    for (int i = 0; i < 10; i++) {
        scanf("%i", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        scanf("%i", &B[i]);
    }

    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%i ", C[i]);
    }

    return 0;
}
