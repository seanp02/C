#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double km;
    double mile;
    printf("Please enter kilometers: ");
    scanf("%lf", &km);
    mile = 0.6214 * km;
    printf("%.1f km is equal to %.1f miles\n", km, mile);

    return 0;
}