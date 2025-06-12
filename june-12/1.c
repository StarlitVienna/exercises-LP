#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    char tmp = ' ';
    fgets(A, sizeof(A), stdin);
    for (int i = 0; A[i] != '\0'; i++) {
        if (tmp == ' ' && A[i] != '\0' && A[i] != ' ' && A[i] != '\n') {
            A[i] = A[i] - 32;
        }
        tmp = A[i];
    }
    printf("%s\n", A);
    return 0;
}