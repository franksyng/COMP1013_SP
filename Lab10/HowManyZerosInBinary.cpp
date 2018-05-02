#include<stdio.h>
int ZeroInBinary(int n);

int main(void){

    int n, j;
    printf("Plz input an integer: ");
    scanf("%d", &n);

    j = ZeroInBinary(n);

    printf("There are %d zeros in the binary representation of %d\n", j, n);

    return 0;
}

int ZeroInBinary(int n){
    if(n == 0){//Base case
        return 0;
    }
    else if(n % 2 == 0)//When get a 0, count 1, and continue the recursion
        return ZeroInBinary(n/2) + 1;
    else//When get a 1, count nothing, and continue the recursion
        return ZeroInBinary(n/2);

}