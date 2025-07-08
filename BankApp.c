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
        printf("Enter the password: ");
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

            menuBank();
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
    double currentAccountBalance = 0;

    printf("\nCurrent Account Menu\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choise: \n");
    scanf("%d", currentAccountMenu);
}

void savingsAccountMenu(){

    int currentSavingMenuChoise = 0;
    double currentSavingBalance = 0;

    printf("\nSavings Account Menu\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choise: \n");
    scanf("%d", savingsAccountMenu);
}