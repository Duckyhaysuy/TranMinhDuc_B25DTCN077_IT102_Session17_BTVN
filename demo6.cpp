#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str[MAX];
    char word[MAX];
    char longestStr[MAX] = "";
    int i, j = 0;

    printf("Moi ban nhap chuoi: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Chuoi ban vua nhap la: %s\n", str);

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longestStr)) {
                strcpy(longestStr, word);
            }
            j = 0; 
        }
    }

    printf("Tu dai nhat la: \"%s\"\n", longestStr);
    printf("Do dai cua tu la: %lu\n", strlen(longestStr));

    return 0;
}

