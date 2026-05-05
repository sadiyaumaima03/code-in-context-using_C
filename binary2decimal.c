#include<stdio.h>
    int main(){
        int n, digit, base = 1, decimal = 0;

        printf("Enter a binary number:");
        scanf("%d",&n);

        for(; n != 0; n /= 10){
        digit = n % 10;
        decimal += digit * base;
        base *= 2;
        }
        printf("%d",decimal);
    return 0;
    }