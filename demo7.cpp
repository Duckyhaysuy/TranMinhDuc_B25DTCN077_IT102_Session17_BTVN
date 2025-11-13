#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char A[MAX], B[MAX];
    printf("Nhap chuoi A: ");
    fgets(A, MAX, stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("Nhap chuoi B: ");
    fgets(B, MAX, stdin);
    B[strcspn(B, "\n")] = '\0';

    if (strstr(A, B) != NULL)
        printf("Co\n");
    else
        printf("Khong\n");

    return 0;
}

