#include <stdio.h>
int main() {
    float numbers[10];
    int negatives = 0;
    float sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
        if (numbers[i] < 0) {
            negatives++;
        } else {
            sum += numbers[i];
        }
    }
    printf("sum --> %f", sum);
    printf("\n number of negatives --> %i", negatives);
    return 0;
}