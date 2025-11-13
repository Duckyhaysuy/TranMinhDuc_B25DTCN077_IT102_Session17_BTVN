#include <stdio.h>
#include <string.h>

#define MAX 100

void inputStr(char str[]);
int isPalindrome(char str[]);
char toLowerCase(char c);

int main() {
    char str[MAX];
    
    inputStr(str);

    if (isPalindrome(str))
        printf("La palindrome.\n");
    else
        printf("Khong phai palindrome.\n");

    return 0;
}

void inputStr(char str[]) {
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32; 
    return c;
}

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        if (str[left] == ' ') { left++; continue; }
        if (str[right] == ' ') { right--; continue; }

        if (toLowerCase(str[left]) != toLowerCase(str[right])) {
            return 0;
        }

        left++;
        right--;
    }
    return 1;
}

