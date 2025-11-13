#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void inputStr(char str[]);
void toUpperStr(char str[]);
void toLowerStr(char str[]);

int main() {
    char str[MAX] = "";
    int choice;

    do {
        printf("\n========= MENU =========\n");
        printf("1. Nhap chuoi\n");
        printf("2. Chuyen chuoi thanh CHU HOA\n");
        printf("3. Chuyen chuoi thanh chu thuong\n");
        printf("4. Thoat\n");
        printf("========================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                inputStr(str);
                break;

            case 2:
                if (strlen(str) == 0)
                    printf("Chuoi trong! Hay nhap chuoi truoc.\n");
                else {
                    toUpperStr(str);
                    printf("Chuoi CHU HOA: %s\n", str);
                }
                break;

            case 3:
                if (strlen(str) == 0)
                    printf("Chuoi trong! Hay nhap chuoi truoc.\n");
                else {
                    toLowerStr(str);
                    printf("Chuoi chu thuong: %s\n", str);
                }
                break;

            case 4:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }

    } while (choice != 4);

    return 0;
}

void inputStr(char str[]) {
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void toUpperStr(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
}

void toLowerStr(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
}

