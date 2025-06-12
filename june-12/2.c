#include <stdio.h>
#include <string.h>

int main() {
    char A[100]; char B[100]; char C[201];
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);
    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';
    int k = 0;
    int j = 0;
    while (A[k] != '\0' || B[j] != '\0') {
        if (A[k] != '\0') {
            C[k+j] = A[k];
            k++;
        }
        if (B[j] != '\0') {
            C[k+j] = B[j];
            j++;
        }
    }
    C[k+j] = '\0';
    printf("%s\n", C);
    return 0;
}