#include <stdio.h>

int main() {
    int v1[10];
    int v2[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        int tmp;
        scanf("%i", &tmp);
        while (tmp < 0 || tmp > 50) {
            scanf("%i", &tmp);
        }
        v1[i] = tmp;
        if (tmp % 2 != 0) {
            v2[count] = tmp;
            count++;
        }
    }

    printf("vector 1 -->\n");
    for (int i = 0; i < 10; i += 2) {
        printf("%i %i\n", v1[i], v1[i+1]);
    }

    printf("vector 2 -->\n");
    for (int i = 0; i < count; i += 2) {
        if (i + 1 < count) {
            printf("%i %i\n", v2[i], v2[i+1]);
        } else {
            printf("%i\n", v2[i]);
        }
    }

    return 0;
}
