#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j + i < 4; j++) {
            printf(" ");
        }
        for (int k = 0; k<i+1; k++) {
            printf("*");
        }
        for (int l = 0; l<i; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}