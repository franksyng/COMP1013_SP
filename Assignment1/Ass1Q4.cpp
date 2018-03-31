#include<stdio.h>
int main(){
    printf("Plz input a character\n");//Tips
    char ch;
    scanf("%c",&ch);//Input a character

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')//Check if it is English letter
            printf("This is a English letter\n");

    else if ((ch >= '0') && (ch <= '9'))
        printf("This is a number\n");//Check if it is digit

         else
             printf("It is neither a digit nor a English letter\n");//Neither letter nor digit
}