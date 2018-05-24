#define _CRT_SECURE_NO_DEPRECATE
//typedef int _bool;
//#define true (_BOOL)1
//#define false (_BOOL)0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>

struct theAccount {
    char accountnum[10]; //To store the ID of the account
    char accountname[30]; //To store the name of the account
    char accountpass[10]; //To store the password of the account
    double accountmoney; //To store the money of the account
    char accounttype; //To store whether the account is VIP or Normal account
};
int isAccount; //To locate the account of whom is using the Bank System

//The Following function is to upload the latest data of all the accounts
void Upload(int acci, struct theAccount *p) {
    int i;
    FILE *fp;
    fp = fopen("account.txt", "r+");
    for (i = 0; i < acci; i++) {
        fprintf(fp, "%s %s %s %.2lf %c\n", p[i].accountnum, p[i].accountname,
                p[i].accountpass, p[i].accountmoney,
                p[i].accounttype);
    }
    fclose(fp);

}

//To check whether the account and the password are match
int islogin(int acci, struct theAccount *p) {
    char login[10], pass[10];
    int i;
    printf("Please input your account: \n");
    scanf("%s", login);
    for (i = 0; i < acci; i++) {
        if (strcmp(login, p[i].accountnum) == 0) {
            printf("Hi, %s. Please input your password: \n", p[i].accountname);
            scanf("%s", pass);
            if (strcmp(pass, p[i].accountpass) == 0) {
                //printf("You have %.2lf in your account\n",p->accountmoney);
                isAccount = i;
                //printf("This is %d\n", isAccount);
                return 1;
                //Both the account and the password are correct
            } else {
                printf("Wrong Password ! \n");
                printf("Program exit.\n");
                return 0;
                //The password is not correct
            }
        }
    }
    printf("Wrong input, This Account does not exist \n");
    printf("Program exit.\n");
    return 1;
    //Can not find the account
}

//Function to inquiry the money that this account has
void Inquiry(int acci, struct theAccount *p) {

    printf("\t\t|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t        You have %.2lf in your account      \n", p[isAccount].accountmoney);
    printf("\t\t|                                               |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|\n");
    printf("\n\n\n\n");
    /*
    You write code here about the inquiry
    */
    printf("Press any key to continue...");
    getchar();
    getchar();

}

//Function is for the account to save money into the bank
void Save(int acci, struct theAccount *p) {
    double insave;
    printf("\nYou have %.2lf $ in your account.\n", p[isAccount].accountmoney);
    printf("\nInput the amount of saving into the account:\n");
    scanf("%lf", &insave);
    //check whether the input number is bigger than 0
    while (insave <= 0) {
        printf("It must be more than 0, input another amount.\n");
        scanf("%lf", &insave);
    }
    p[isAccount].accountmoney += insave;
    printf("You have %.2lf $ in your account now.\n\n", p[isAccount].accountmoney);
    printf("Press any key to continue...");
    getchar();
    getchar();


    /*
    You write code here about the save
    */
}

//Function to withdraw from an account
void Withdraw(int acci, struct theAccount *p) {
    double takeOut, limit;

    printf("\n\nHi, %s", p[isAccount].accountname);
    printf("\nYou have %.2lf $ in your account.\n", p[isAccount].accountmoney);
    printf("\nInput the amount of withdrawing:\n");
    scanf("%lf", &takeOut);
//To check whether the account is Vip or not
//Give the limit of the amount of withdrawing
    if (p[isAccount].accounttype == 'V')
        limit = 3000;
    else
        limit = 2000;
//To check if the user has no enough money to withdraw
//To check if the user's input exceed the limit
    while (takeOut > limit || takeOut > p[isAccount].accountmoney) {
        printf("\n!!! Warning !!!\n");
        printf("You are limited to take so much\n");
        printf("    VIP --- Less than 3000\n");
        printf(" Normal --- Less than 2000\n\n");
        printf("Please input another amount\n");
        scanf("%lf", &takeOut);
    }
    p[isAccount].accountmoney -= takeOut;
    printf("You have %.2lf $ in your account now.\n\n", p[isAccount].accountmoney);

    printf("Press any key to continue...");
    getchar();
    getchar();

    /*
    You write code here about the withdraw
    */

}

void Transfer(int acci, struct theAccount *p) {
    char receiver[20];
    int x, limit;
    double trans, charge;
    printf("\n\nHi, %s", p[isAccount].accountname);
    printf("\nYou have %.2lf $ in your account.\n", p[isAccount].accountmoney);
    printf("\nInput the ID of receiver:\n");
//To check whether the account is VIP or not
//Give the right limit and the charge to calculate
    if (p[isAccount].accounttype == 'V') {
        limit = 20000;
        charge = 0.005;
    } else {
        limit = 10000;
        charge = 0.01;
    }
    scanf("%s", receiver);
    for (x = 0; x < acci; x++) {
//To check if the receiver is on the Account.txt
        if (strcmp(receiver, p[x].accountnum) == 0) {
            printf("The name of receiver is %s.\n", p[x].accountname);
            printf("Input the amount of transferring:\n");
            scanf("%lf", &trans);
//To check if the amount of transferring is invalid
            while (trans > limit || trans > p[isAccount].accountmoney) {
                printf("\n!!! Warning !!!\n");
                printf("You are limited to take so much\n");
                printf("    VIP --- Less than 20000\n");
                printf(" Normal --- Less than 10000\n\n");
                printf("Please input another amount:\n");
                scanf("%lf", &trans);
            }
            p[x].accountmoney += trans;
            p[isAccount].accountmoney -= trans * (1 + charge);
            printf("You have transfer %.2lf to the receiver.\n", trans);
            printf("The charge of transfer is %.2lf.\n", trans * charge);
            printf("You have %.2lf $ in your account now.\n\n", p[isAccount].accountmoney);
            printf("Press any key to continue...");
            getchar();
            getchar();
            return;
//If the receiver is not in the Account.txt
        } else if (x == acci - 1) {
            printf("\n!!! Warning !!!\n");
            printf("This account does not exist\n");
            printf("return to the main menu\n\n\n");
            return;
        }
    }


}

//To quit the whole ATM System
void Quit() {
    printf("All actions have saved!!\nYou have exit the system\n");
    exit(0);
}

//The welcome page
void function_list(int acci, struct theAccount *p) {
    int i = 0;

    do {

        printf("\t\t|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|       Hi, %-15s                     |\n", p[isAccount].accountname);
        printf("\t\t|       Welcome to Use ATM System            	|\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|    Please Select The Following Functions:     |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|   $$-Inquiry	 -- Press 1                     |\n");
        printf("\t\t|   $$-Save      -- Press 2                     |\n");
        printf("\t\t|   $$-Withdraw	 -- Press 3                     |\n");
        printf("\t\t|   $$-Transfer	 -- Press 4                     |\n");
        printf("\t\t|   $$-Quit      -- Press 5                     |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|\n");

        printf("\n\n\n\n");

        printf("Please Input Number:");
        scanf("%d", &i);

        switch (i) {

            case 1:
                Inquiry(acci, p);
                break;
            case 2:
                Save(acci, p);
                break;
            case 3:
                Withdraw(acci, p);
                break;
            case 4:
                Transfer(acci, p);
                break;
            case 5:
                Upload(acci, p);
                Quit();
                break;
            default:
                printf("Number should between 1 -- 5!\n");
                int r = 0;
                while ((r = getchar()) && r != EOF && r != '\n') {}
                //Clear the data in Flush
        }

    } while (1);
}

int main() {
    struct theAccount account[1000];
    //struct theAccount *point = malloc(sizeof(struct theAccount));
    int x, acci = 0;
    //acci is the amount of the whole Accounts
    FILE *fp;
    fp = fopen("account.txt", "r+");
    while (fscanf(fp, "%s%s%s%lf%*c%c", account[acci].accountnum, account[acci].accountname,
                  account[acci].accountpass, &account[acci].accountmoney,
                  &account[acci].accounttype) != EOF) {
        acci++;

    }
    //Put the Account in the .txt into the struct
    printf("Here are all the Accounts in the list\n\n\n");
    for (x = 0; x < acci; x++)
        printf("%s %s %s %.2lf %c\n", account[x].accountnum, account[x].accountname,
               account[x].accountpass, account[x].accountmoney,
               account[x].accounttype);
    //Print out all the Accounts in the .txt
    printf("\n\n\n\n");
    fclose(fp);
    while (islogin(acci, account) == 1) {
        while (1) {
            function_list(acci, account);
        }
    }
    return 0;
}