#include<stdio.h>
    int main(){
        float salary, total_tax;

        printf("Welcome to the income tax calculator\n");
        
        printf("Enter your salary:");
        scanf("%f",&salary);
        
        if(salary<=2500){
            total_tax = 0;
        }else if(salary>2500 && salary<=5000){
            total_tax = (salary - 2500)*0.05;
        }else if(salary>5000 && salary<=10000){
            total_tax = (2500 * 0.05) + (salary - 5000)*0.10;
        }else{
            total_tax = (2500 * 0.05) + (5000 * 0.10) + (salary - 10000)*0.20;
        }
        printf("Income tax = %.2f\n",total_tax);
        return 0;
    }