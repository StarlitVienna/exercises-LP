#include <stdio.h>

int main() {
    int v[10];
    int v1[10];
    int v2[10];
    int v1_count = 0;
    int v2_count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[v2_count++] = v[i];
        } else {
            v1[v1_count++] = v[i];
        }
    }

    for (int i = 0; i < v1_count; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    for (int i = 0; i < v2_count; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
