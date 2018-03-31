#include<stdio.h>
int main(){
    int num, n;//Declare variable

    printf("Plz input a positive integer\n");//Tips
    scanf("%d", &num);//Input a number

    if( num > 999 )
        printf("The inputs is too big");

    /* Use modulo operation to get each digit reversed*/
    else
        while ( num != 0 )//Set the criteria
        {
        n = num % 10;//Modulo operation
        printf("%d", n);//Print modulo
        num /= 10;//Delete the last digit
    }
}