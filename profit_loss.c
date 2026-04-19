#include<stdio.h>
    int main(){
        float cost_price,selling_price,result;
        printf("Enter cost price:");
        scanf("%f",&cost_price);
        printf("Enter selling price:");
        scanf("%f",&selling_price);

        if(selling_price > cost_price){
            result = selling_price - cost_price;
            printf("PROFIT: %.2f\n",result);
        }else if(cost_price > selling_price){
            result = cost_price - selling_price;
            printf("LOSS: %.2f\n",result);
        }else{
            printf("No profit, no loss\n");
        }
        return 0;
    }