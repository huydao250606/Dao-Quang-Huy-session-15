#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    int leng = strlen(str);
    for (int i = 0; i < leng; i++) {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            }
        }
    }
    printf("Chuoi sau khi viet hoa cac chu cai dau: %s\n", str);
    return 0;
}

