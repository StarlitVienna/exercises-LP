#include <stdio.h>

int main() {
    int nums[6];
    int evens[6], odds[6];
    int evens_count = 0, odds_count = 0;
    int sum_evens = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0) {
            evens[evens_count++] = nums[i];
            sum_evens += nums[i];
        } else {
            odds[odds_count++] = nums[i];
        }
    }

    printf("even numbers: ");
    for (int i = 0; i < evens_count; i++) {
        printf("%d ", evens[i]);
    }
    printf("\nsum of even numbers: %d\n", sum_evens);

    printf("odd numbers: ");
    for (int i = 0; i < odds_count; i++) {
        printf("%d ", odds[i]);
    }
    printf("\ncount of odd numbers: %d\n", odds_count);

    return 0;
}
