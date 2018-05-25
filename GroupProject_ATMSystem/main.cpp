#define _CRT_SECURE_NO_DEPRECATE
//typedef int _bool;
//#define true (_BOOL)1
//#define false (_BOOL)0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Banksystem.h"
//#include <stdbool.h>


int main() {
    int isAccount; //To locate the account of whom is using the Bank System
    struct theAccount account[1000];
    //struct theAccount *point = malloc(sizeof(struct theAccount));
    int x, acci = 0;
    //acci is the amount of the whole Accounts
    FILE *fp;
    fp = fopen("account.txt", "r+");
    while (fscanf(fp, "%s%s%s%lf%*c%c", account[acci].accountNo, account[acci].accountname,
                  account[acci].accountpass, &account[acci].accountmoney,
                  &account[acci].accounttype) != EOF) {
        acci++;

    }
    //Put the Account in the .txt into the struct
    printf("Here are all the Accounts in the list\n\n\n");
    for (x = 0; x < acci; x++)
        printf("%s %s %s %.2lf %c\n", account[x].accountNo, account[x].accountname,
               account[x].accountpass, account[x].accountmoney,
               account[x].accounttype);
    //Print out all the Accounts in the .txt
    printf("\n\n\n\n");
    fclose(fp);
    while (islogin(acci, account,&isAccount) == 1) {
        while (1) {
            function_list(acci, account, isAccount);
        }
    }
    return 0;
}