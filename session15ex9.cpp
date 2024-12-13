#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char ch;
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    int len = strlen(str);
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0'; // Ket thuc chuoi
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);
    return 0;
}

