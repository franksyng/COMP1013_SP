#include<stdio.h>

/* To insert a number in an array */

int main(void){

    int fixValue[] = {3, 10, 15, 30, 55, 77};
    int inpt, i, len;

    printf("Plz input an integer: ");//print hint
    scanf("%d", &inpt);//input an integer

    len = 6;//assign array length as 6

    for(i = 0; i < len; i++ ){//loop to print number before intersection
        if(inpt < fixValue[i] && (inpt > fixValue[i-1])){//if find input lesser than fixValue[i] and input lesser than fixValue[i - 1]
            printf("%d ", inpt);//print inpt to switch the number
        }
        printf("%d ", fixValue[i]);//print the original array named fixValue
    }

    return 0;


}