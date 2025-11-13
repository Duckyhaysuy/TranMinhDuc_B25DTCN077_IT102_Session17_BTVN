#include <stdio.h>
#include <string.h>
#define MAX 100

void intStr(char str[]);
char intCh();
void delCh(char str[], char ch);
void showStr(char str[]);

int main() {
    char str[MAX];
    char ch;
    int choice;
    
    do {
        printf("\n================ MENU =================\n");
        printf("1. Nhap chuoi.\n");
        printf("2. Nhap ky tu can xoa.\n");
        printf("3. Xoa ky tu vua nhap trong .\n");
        printf("4. Hien thi chuoi hien tai.\n");
        printf("5. Thoat chuong trinh.\n");
        printf("=======================================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                intStr(str);
                break;

            case 2:
                ch = intCh();
                break;

            case 3:
                if (strlen(str) == 0) {
                    printf("Chuoi trong! Hay nhap chuoi truoc.\n");
                } else if (ch == '\0') {
                    printf("Ban chua nhap ky tu can xoa!\n");
                } else {
                    delCh(str, ch);
                    printf("==> Da xoa ky tu '%c' khoi chuoi.\n", ch);
                }
                break;

            case 4:
                showStr(str);
                break;

            case 5:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long nhap lai.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

void intStr(char str[]) {
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("==> Da nhap chuoi: %s\n", str);
}

char intCh() {
    char ch;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    getchar(); // Xóa '\n' còn l?i
    printf("Ky tu can xoa la: '%c'\n", ch);
    return ch;
}

void delCh(char str[], char ch) {
    int i, j = 0;
    char temp[MAX];
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

void showStr(char str[]) {
    if (strlen(str) == 0)
        printf("Chuoi hien tai dang trong.\n");
    else
        printf("Chuoi hien tai: %s\n", str);
}

