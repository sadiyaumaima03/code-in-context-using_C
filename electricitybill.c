#include<stdio.h>
    int main(){
        int customerno;
        float units, total_bill;
        printf("Enter customer number:");
        scanf("%d",&customerno);
        printf("Enter units consumed:");
        scanf("%f",&units);

        if(units>=0 && units<=50){
            total_bill = units * 0.50;
        }else if(units>=150){
            total_bill = (50 * 0.50) + ((units - 50)*0.75);
        }else if(units>=250){
            total_bill = (50 * 0.50) + (100 * 0.75) + ((units - 150)*1.20);
        }else{
            total_bill = (50 * 0.50) + (100 * 0.75) + (150 * 1.20) + ((units - 250)*1.50);
    }
    printf("ELECTRICITY BILL: %.2f",total_bill);
    return 0;
    }