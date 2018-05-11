#include<stdio.h>
#include<string.h>
/* To get English letters from a string */
int main(void){

    char inpt[50];//String
    int i, j, len;//i for loop, j for counting, len for string len

    j = 0;

    printf("Plz input a string: ");//print hints
    scanf("%s", inpt);//input string
    len = strlen(inpt);

    //A loop for English letter printing and counting
    for(i = 0; i <= len; i++){
        if(((inpt[i] >= 'A') && (inpt[i] <= 'Z') || (inpt[i] >= 'a') && (inpt[i] <= 'z'))){//Make between A-Z or a-z
            printf("%c", inpt[i]);//print answer
            j++;//count the number of letters
        }
    }

    if(j == 0){//If j = 0, means there is no English letter
        printf("There is no English letter in the string.");
    }

    return 0;
}