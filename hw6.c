#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int arr[5];
    int i;
    printf("Please input five integers: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("\n");

    printf("Odd numbers: ");

    for(i=0;i<5;i++)
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);

    printf("\n");

    printf("Even numbers: ");

    for(i=0;i<5;i++)
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    printf("\n");

    return 0;
}