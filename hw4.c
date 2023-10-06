#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num;
    int count=2;
    printf("Please enter a number: ");
    scanf("%d", &num);
    if (num == 1)
        printf("It is not a prime number.\n");
    else if (num == 2)
        printf("It is a prime number.\n");
    else {
        for(int i = 2; i <= num; i++) {
            if (i == num) {
                printf("It is a prime number.\n");
                break;
            }
            else if (num % i == 0) {
                printf("It is not a prime number.\n");
                break;
            }
        }
    }

    return 0;
}