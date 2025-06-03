#include <stdio.h>

int main() {
    float notas[15];
    float average = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%f", &notas[i]);
        average += notas[i];
    }

    printf("average is --> %f", average/15);
    return 0;
}