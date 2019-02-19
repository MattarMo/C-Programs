#include <stdio.h>


char menu();
int getDeposit(int);
int getWithdraw(int);
void displayBalance(int);

int main()
{
    int currentBalance= 0;
    char choice;

while ( choice !='Q' && choice != 'q');
{
    choice = menu();

    switch(choice)
    {
        case 'D': case 'd':
           currentBalance = getDeposit(currentBalance);
           break;

        case 'W': case 'w':
            currentBalance = getWithdraw(currentBalance);
            break;

        case 'B': case 'b':
            displayBalance(currentBalance);
            break;

        case 'Q': case 'q':
            printf("Thank you!");
            break;

        default:
            printf("You made an invalid selection");
    }
}

   return 0;
}
char menu()
{
    char choice;

    printf("\nWelcome to HFCC Federal Credit Union!");
    printf("\nPlease select from the following menu: ");
    printf("\nD:  Make a deposit");
    printf("\nW:  Make a withdraw");
    printf("\nB:  Check your account balance");
    printf("\nQ:  To quit\n");
    scanf("\n%c", &choice);

    return choice;
}
int getDeposit(int currentBalance)
{
   int amountDeposited;

   printf("What is the balance you would like to deposit");
   scanf("%d", &amountDeposited);
   while(amountDeposited < 0)
    {
    	printf("Can not have a negative amount\n");
    	printf("What is the amount you would like to deposit?");
    	scanf("%f", &amountDeposited);
	}

   return currentBalance = currentBalance + amountDeposited;

}
int getWithdraw(int currentBalance)
{
    int amountToWithdraw;

    printf("What is the amount you would like to withdraw ? ");
    scanf("%d", &amountToWithdraw);

    while (amountToWithdraw > currentBalance)
    {
        printf("\nYou have insufficient funds for this transaction");
        printf("\nWhat is the amount you would like to withdraw ? ");
        scanf("%d", &amountToWithdraw);
    }

    return currentBalance = currentBalance -amountToWithdraw;
}
void displayBalance(int currentBalance)
{
    printf("Your current balance is $%d", currentBalance);
}
