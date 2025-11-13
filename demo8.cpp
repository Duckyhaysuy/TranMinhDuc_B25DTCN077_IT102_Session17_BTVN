#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main() {
    char pass[MAX];
    int i;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Nhap mat khau: ");
    fgets(pass, MAX, stdin);
    pass[strcspn(pass, "\n")] = '\0';

    if (strlen(pass) >= 8) {
        for (i = 0; i < strlen(pass); i++) {
            if (isupper(pass[i])) hasUpper = 1;
            else if (islower(pass[i])) hasLower = 1;
            else if (isdigit(pass[i])) hasDigit = 1;
            else hasSpecial = 1;
        }
    }

    if (strlen(pass) >= 8 && hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Hop le\n");
    else
        printf("Khong hop le\n");

    return 0;
}

