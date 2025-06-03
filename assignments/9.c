#include <stdio.h>

int main() {
    int A[6];
    for (int i = 0; i < 6; i++) {
        scanf("%i", &A[i]);
    }
    for (int i = 5; i >= 0; i--) {
        printf("%i ", A[i]);
    }
    return 0;
}
