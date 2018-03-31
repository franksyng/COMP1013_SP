#include<stdio.h>
int main(){
    printf("Plz input a number\n");
    int num, R;
    scanf("%d", &num);//Input a number

    /* Multiple of 3 */
    if(num % 3 == R) {
        if (R == 0)
            printf("%d is the multiple of 3", num);
    }

    /* Multiple of 2 */
    else if(num % 2 == R){
        if (R == 0)
            printf("%d is the multiple of 2", num);
    }

    /* Not mutiple of both */
    else
        printf("%d is not the multiple of both 3 and 2", num);

    return 0;
}