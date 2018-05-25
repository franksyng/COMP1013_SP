//
// Created by Lee on 2018/5/25.
//

#ifndef GROUPPROJECT2_BANKSYSTEM_H
#define GROUPPROJECT2_BANKSYSTEM_H


struct theAccount {
    char accountNo[10]; //To store the ID of the account
    char accountname[30]; //To store the name of the account
    char accountpass[10]; //To store the password of the account
    double accountmoney; //To store the money of the account
    char accounttype; //To store whether the account is VIP or Normal account
};

void Upload(int acci, struct theAccount *p);
int islogin(int acci, struct theAccount *p, int *isAccount);
void Inquiry(int acci, struct theAccount *p, int isAccount);
void Save(int acci, struct theAccount *p, int isAccount);
void Withdraw(int acci, struct theAccount *p, int isAccount);
void Transfer(int acci, struct theAccount *p, int isAccount);
void Quit();
void function_list(int acci, struct theAccount *p, int isAccount);

#endif //GROUPPROJECT2_BANKSYSTEM_H