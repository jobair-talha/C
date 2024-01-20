#include <stdio.h>

float balance = 0.0;

void deposit(float amount) {
    balance += amount;
    printf("Deposited %.2f\n", amount);
}

void withdraw(float amount) {
    if (balance >= amount) {
        balance -= amount;
        printf("Withdrawn %.2f\n", amount);
    } else {
        printf("Insufficient balance\n");
    }
}

void displayBalance() {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    int name;
    int choice;
    float amount;

    printf("*** Banking System ***\n");

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                displayBalance();
                break;
            case 4:
                printf("Thank you for using the micofonic system!\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

