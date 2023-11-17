#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double stdevCalc(int param[], int len) {
    int i;
    double sum=0;
    double stdev;
    double dividend = 0.0;
    double mu;
    for(int i; i < len; i++) {
        sum+=param[i];
    }
    mu = sum / (double)len;
    for(i = 0; i < len; i++) {
        dividend += pow(param[i]-mu, 2);
    }
    stdev = sqrt(dividend/len);
    return stdev;
}
int main() {
    int nums[5];
    double stdev;
    int len;
    printf("Enter 5 real numbers: ");
    scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
    len=sizeof(nums)/sizeof(int);
    stdev = stdevCalc(nums, len);
    printf("Standard Deviation = %.3f\n", stdev);
    return 0;
}