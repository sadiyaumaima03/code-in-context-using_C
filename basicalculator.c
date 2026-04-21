#include<stdio.h>
    int main(){
        int a,b;
        char op;
        printf("Welcome to the basic arithematic calculator\n");
        printf("Enter two numbers:");
        scanf("%d %d",&a , &b);
        printf("Enter operator:");
        scanf(" %c",&op);

        switch(op){
        case '+':
            printf("Addition is %d", a+b);
            break;
        case '-':
            printf("Difference is %d", a-b);
            break;
        case '*':
            printf("Multiplication is %d", a*b);
            break;
        case '%':
            printf("Remainder is %d", a%b);
        case '/':
            if(b!=0){
                printf("Quotient is %d", a/b);
            }else{
                printf("ERROR: Division by zero");
            }
        default: 
            printf("Invalid operator");
        }
    return 0;
    }
