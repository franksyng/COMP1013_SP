#include<stdio.h>
int main(){
    printf("Plz input a natural number:");

    int num ,i, j=0;

    scanf("%d", &num);

    //To ensure the number input is a natural number
    for(;num < 0;) {
        scanf("%d", &num);
    }


    //Use loop to count the number of factor
    if(num >= 0){
        for(i = 1; i <= num; i++){
            if(num % i == 0){
                j++;
            }

        }
    }

    //To print the result
    if(j > 2){
        printf("%d is not a prime number", num);
    }
    else
        printf("%d is a prime number", num);
}