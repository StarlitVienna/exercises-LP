#include <stdio.h>

int main() {
    int indexes[2];
    float tmp;
    scanf("%f", &tmp);

    float min = tmp;
    float max = tmp;
    for (int i = 0; i < 4; i++) {
        scanf("%f", &tmp);
        if (tmp < min) {
            min = tmp;
            indexes[0] = i+1;
        }
        if (tmp > max) {
            max = tmp;
            indexes[1] = i+1;
        }
    }
    printf("positions for min/max --> %i/%i", indexes[0], indexes[1]);

    return 0;
}