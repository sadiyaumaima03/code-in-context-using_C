  #include<stdio.h>
    int main(){
        int choice;
        float balance = 2000.00, amount;

        printf("----Welcome to the ATM-----\n");
        printf("1. Check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4):\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Your current balance: %.2f\n",balance);
                    break;
            case 2: printf("Enter amount to deposit:\n");
                    scanf("%f",&amount);
                    if(amount>0){
                        balance+=amount;
                        printf("Successfully deposited %.2f. New balance: $%.2f\n",amount,balance);
                    }
                    else{
                        printf("Invalid deposit amount\n");
                    }
                    break;
            case 3: printf("Enter amount to withdraw:\n");
                    scanf("%f",&amount);
                    if(amount>balance){
                        printf("Insufficient funds!. You only have %.2f",balance);
                    }else if(amount<=0){
                        printf("Invalid amount, please enter positive number\n");
                    }else{
                        balance -= amount;
                        printf("Successfully withdrawn %.2f. Remaining balance: %.2f\n",amount,balance);
                    }
                    break;
            case 4: printf("Thank you for using our ATM. Goodbye!\n");
                    break;
            default: printf("Invalid selection! Please choose (1-4)\n");
        }
        return 0;
    }
