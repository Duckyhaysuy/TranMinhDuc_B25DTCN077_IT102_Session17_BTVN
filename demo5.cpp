#include <stdio.h>
#include <string.h>
#include <ctype.h>
int compareIgnoreCase(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (tolower(str1[i]) != tolower(str2[i])) {
            return 0; 
        }
        i++;
    }
    
    return str1[i] == '\0' && str2[i] == '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (compareIgnoreCase(str1, str2)) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }

    return 0;
}
