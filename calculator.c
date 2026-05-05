#include<stdio.h>
    int main(){
        int choice,a,b;

        printf("---WELCOME TO ARITHEMATIC CALCULATOR---\n");

        do{
            printf("1.ADDITION\n2.SUBTRACT\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n");
            scanf("%d",&choice);
            switch(choice){
                case 1: scanf("%d %d",&a,&b);
                        printf("%d\n",a + b);
                        break;
                case 2: scanf("%d %d",&a,&b);
                        printf("%d\n",a - b);
                        break;
                case 3: scanf("%d %d",&a,&b);
                        printf("%d\n",a * b);
                        break;
                case 4: scanf("%d %d",&a,&b);
                        printf("%d\n",a / b);
                        break;
                case 5: printf("GoodBye!!\n");

            }
        }while(choice != 5);

        return 0;
    }