#include <stdio.h>

int main() {
    float values[5];
    float tmp;
    scanf("%f", &tmp);
    values[0] = tmp;

    float avrg = tmp/5;
    float min = tmp;
    float max = tmp;

    for (int i = 0; i < 4; i++) {
        scanf("%f", &tmp);
        values[i+1] = tmp;
        if (tmp < min) {
            min = tmp;
        }
        if (tmp > max) {
            max = tmp;
        }
        avrg += tmp/5;
    }
    printf("Values --> ");
    for (int i = 0; i < 5; i++) {
        printf("%f ", values[i]);
    }
    printf("\n max --> %f", max);
    printf("\n min --> %f", min);
    printf("\n average --> %f", avrg);
    return 0;
}