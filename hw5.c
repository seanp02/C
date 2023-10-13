#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void IntToBin(int n) {
    if (n == 0) {
        return;
    }
    IntToBin(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
    } else {
        IntToBin(num);
        printf("\n");
    }

    return 0;
}
