#include<stdio.h>
int main(){
    float a,b,c,d,max1,max2,final_max;

    printf("Enter four num:\n");
    scanf("%f %f %f %f",&a,&b,&c,&d);

    if(a>b){
        max1 = a;
    }else{
        max1 = b;
    }if(c>d){
        max2 = c;
    }else{
        max2 = d;
    }if(max1>max2){
        printf("Max = %.2f\n", final_max = max1);
    }else{
        printf("Max = %.2f\n", final_max = max2);
    }
    return 0;
}