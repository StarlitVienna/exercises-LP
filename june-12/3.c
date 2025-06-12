#include <stdio.h>
#include <string.h>
int main() {
    char A[100], B[100], C[100], D[200];
    int k = 0;
    int j = 0;
    int i = 0;
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);
    fgets(C, sizeof(C), stdin);
    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';
    C[strcspn(C, "\n")] = '\0';

    while(A[k] != '\0' || B[j] != '\0' || C[i] != '\0') {
        if (A[k] != '\0') {
            D[k+j+i] = A[k];
            k++;
        }
        if (B[j] != '\0') {
            D[k+j+i] = B[j];
            j++;
        }
        if (C[i] != '\0') {
            D[k+j+i] = C[i];
            i++;
        }
    }
    D[k+i+j] = '\0';
    printf("%s\n", D);
    return 0;

}