#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int chucai = 0, chuso = 0, kytu = 0;
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            chucai++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            chuso++;
        } else {
            kytu++;
        }
    }
    printf("So ky tu la chu cai: %d\n", chucai);
    printf("So ky tu la chu so: %d\n", chuso);
    printf("So ky tu dac biet: %d\n", kytu);
    return 0;
}

