#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

void login();
void pincheck();
void mainMenu();
float checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();


int main() {
    //Local Declarations
    int c,d;
    int pin=1234,press=1;
    int option;
    float balance=10000.00;
    int choose;
    bool again = true;

     printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");

    while(press){
        login();
        scanf("%d", &press);
        if(press==1){
    printf("\nVerifying your card .");
    for (c = 1; c <= 12766; c++)
       for (d = 1; d <= 12767; d++)
       {}
    printf(". .");
        for (c = 1; c <= 12768; c++)
       for (d = 1; d <= 12769; d++)
       {}
    printf(". . .");
        for (c = 1; c <= 12764; c++)
       for (d = 1; d <= 12765; d++)
       {}
    printf(". . . .");
        for (c = 1; c <= 12763; c++)
       for (d = 1; d <= 12762; d++)
       {}
    printf(".\n");

    printf("\nCard is Detected\n\n");

            break;
        }
        else
            printf("****Card is not detected****\n");
    }

    while(pin){

        pincheck();
        scanf("%d", &pin);
            if(pin==1234){

    break;
            }
    else
        printf("****invalid pin try again****\n");
    }

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);

        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
            	system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
            	system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }

}

    return 0;
}
