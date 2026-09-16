#include <stdio.h>
/*
================================
          MONEY! BANK
================================

1 - Check balance
2 - Make a deposit
3 - Make a withdrawal
4 - View statement
5 - Exit

Choose an option:*/

#define MAX_TRANSACTIONS 100
#define INITIAL_BALANCE 2800.00f

typedef struct Transaction {
    char type;
    float amount;
} Transaction;

int main(){

// VARIABLES
float balance = INITIAL_BALANCE;
int userChoice = 0; 
float deposit = 0.00f;
float withdrawal = 0.00f;
Transaction transactions[MAX_TRANSACTIONS];
int transactionCount = 0;


// MAIN MENU 
do {
    printf("\n================================\n");
    printf("          MONEY! BANK\n");
    printf("================================\n");

    printf("\n1 - Check balance\n"
            "2 - Make a deposit\n"
            "3 - Make a withdrawal\n"
            "4 - View statement\n"
            "5 - Exit\n");

    printf("\nChoose an option: ");
    if (scanf("%d", &userChoice) != 1) {
    printf("Invalid input. Please enter a number.\n");

    while (getchar() != '\n');
    }
        switch (userChoice)
        {
        case 1: // CHECK BALANCE OPTION
            printf("Available balance: $%.2f\n", balance);
            break;
        case 2: // MAKE A DEPOSIT OPTION
            do {
                deposit = 0;
                printf("Enter the deposit amount: $");
                if (scanf("%f", &deposit) != 1) {
                printf("Invalid input. Please enter a number.\n\n");

                while (getchar() != '\n');
                continue;
                }
                // Check if the entered amount is valid 
                if(deposit <= 0){
                    printf("Invalid amount. The deposit must be greater than zero.\n\n");
                } else if (transactionCount >= MAX_TRANSACTIONS){
                    printf("Transaction limit reached. No more transactions can be registered.\n\n");
                } else {
                    transactions[transactionCount].type = 'D';
                    transactions[transactionCount].amount = deposit; 
                    
                    balance += deposit; // Update the balance
                    transactionCount++;
                    
                    printf("Deposit successful!\n"
                            "New balance: $%.2f\n", balance);
                }

            } while (deposit <= 0);

            break;
        case 3: // MAKE A WITHDRAWAL OPTION
            do {
            withdrawal = 0;
            printf("Enter the withdrawal amount: $");
            if (scanf("%f", &withdrawal) != 1) {
            printf("Invalid input. Please enter a number.\n\n");

            while (getchar() != '\n');
            continue;
            }
            
            // Check if the withdrawal amount is valid
            if (withdrawal <= 0){
                printf("Invalid amount. The withdrawal must be greater than zero.\n\n"); 
                
            } else if (withdrawal > balance){
                printf("Insufficient funds.\n"
                        "Available balance: $%.2f\n\n", balance);
            } else if (transactionCount >= MAX_TRANSACTIONS){
                printf("Transaction limit reached. No more transactions can be registered.\n\n");
            } else {
                transactions[transactionCount].type = 'W';
                transactions[transactionCount].amount = withdrawal;
                balance -= withdrawal; // Update the balance
                transactionCount++;
                printf("Withdrawal successful!\n"
                        "New balance: $%.2f\n", balance);
            } 

            } while (withdrawal <= 0 || withdrawal > balance);
            break;
        case 4: // VIEW A STATEMENT OPTION
            printf("\n================================\n");
            printf("          STATEMENT\n");
            printf("================================\n");

            printf("\nInitial balance: $2800.00\n"
                    "Current balance: $%.2f", balance);
            printf("\n\n");

            printf("Transactions: \n");
            for (int i = 0; i < transactionCount; i++){
                if (transactions[i].type == 'D'){
                    printf("Deposit: +$%.2f\n", transactions[i].amount);
            } else if (transactions[i].type == 'W'){
                    printf("Withdrawal: -$%.2f\n", transactions[i].amount);
            }
            }
            break;
        case 5: // EXIT OPTION
            printf("Thank you for using Money! Bank.\n\n");
            break;
        default: // INVALID OPTION WARNING 
            printf("Invalid option\n");
            break;
        }

} while (userChoice != 5);


    return 0;
}
