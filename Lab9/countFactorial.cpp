#include<stdio.h>
int calFac(int);

int main(void){
    int num;

    scanf("%d", &num);

    calFac(num);

    return 0;
}

int calFac(int num){
    int i, fac;

    i = 1;
    fac = 1;

    while(i <= num){
        fac = fac * i;
        i++;
    }

    printf("The factorial number of %d is %d", num, fac);

    return 0;
}