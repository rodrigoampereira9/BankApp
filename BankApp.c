#include <stdio.h>
#include <stdbool.h>


bool checkPassword(int password); 
void menuBank();
void currentAccountMenu();
void savingsAccountMenu();

int main() {
    
    int passwordTries = 1 ; 
    int password = 0;

    do
    {
        printf("\nEnter the password: ");
        scanf(" %d", &password);
        checkPassword(password);

        if(checkPassword(password)){
            menuBank();
        }else{

            printf("Wrong Password\nYou more %d tries\n", 3 - passwordTries);
            passwordTries += 1;
            if (passwordTries == 4)

            {
                printf("\nNo more tries left:");
                break;
            }  
        }     
    } while (checkPassword(password) == false);

    return 0;
}

 // just for demo
bool checkPassword(int password){


    if(password == 123456789){
        return true;
    }else {
        return false;
    }

}

void menuBank(){

    int mainMenuChoise = 0;


    do
    {
        printf("\nMain Menu\n");
        printf("1. Current Account\n");
        printf("2. Savings Account\n");
        printf("3. Exit\n");
        printf("Enter your choise: \n");
        scanf("%d", &mainMenuChoise);

        if (mainMenuChoise != 1 && mainMenuChoise != 2 && mainMenuChoise != 3)
        {
            printf("\nYou can only chose (1-3)");

        } else if( mainMenuChoise == 1){

            currentAccountMenu();

        } else if(mainMenuChoise == 2){

            savingsAccountMenu();

        } else{

            break;
        }
          
    } while (mainMenuChoise != 1 && mainMenuChoise != 2 && mainMenuChoise != 3);
    

    if (mainMenuChoise == 1)
    {
        currentAccountMenu();

    } else if (mainMenuChoise == 2)
    {
        savingsAccountMenu();
    }
    
    
    
    
    

}

void currentAccountMenu(){

    int currentAccountMenuChoise = 0;
    double currentAccountBalance = 5000;
    double amountMoneyWithdraw = 0; 

    do
    {
        printf("\nCurrent Account Menu\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choise: ");
        scanf("%d", &currentAccountMenuChoise);

    if (currentAccountMenuChoise != 1 && currentAccountMenuChoise != 2 && currentAccountMenuChoise != 3)
        {
            printf("\nYou can only chose (1-3)");

        } else if( currentAccountMenuChoise == 1){

            printf("\nYour current Balance is: %.2lf $", currentAccountBalance);
            //currentAccountMenu();

        } else if(currentAccountMenuChoise == 2){

            do
            {
                printf("\nAmount of Money you want to Withdraw: ");
                scanf("%lf", &amountMoneyWithdraw);

                if( amountMoneyWithdraw > currentAccountBalance){
                    printf("You can't withdraw more money than you have\nYou have in your account %.2lf$ and you want you withdraw %.2lf$", currentAccountBalance, amountMoneyWithdraw);

                } else if(amountMoneyWithdraw <= currentAccountBalance){

                    currentAccountBalance -= amountMoneyWithdraw;
                    //currentAccountMenu();
                }
            } while (amountMoneyWithdraw > currentAccountBalance);
            

        } else{

            menuBank();
        }
          
    } while (currentAccountMenuChoise != 3);

    


}

void savingsAccountMenu(){

    int currentSavingMenuChoise = 0;
    double currentSavingBalance = 0;

    printf("\nSavings Account Menu\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choise: \n");
    scanf("%d", &savingsAccountMenu);
}


//See Loop When i 