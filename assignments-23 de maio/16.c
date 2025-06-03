#include <stdio.h>

int main() {
    float values[5];
    int code;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &values[i]);
    }

    scanf("%i", &code);

    if (code == 0) {
        return 0;
    } else if (code == 1) {
        for (int i = 0; i < 5; i++) {
            printf("%f ", values[i]);
        }
    } else if (code == 2) {
        for (int i = 4; i >= 0; i--) {
            printf("%f ", values[i]);
        }
    } else {
        printf("invalid");
    }

    return 0;
}
