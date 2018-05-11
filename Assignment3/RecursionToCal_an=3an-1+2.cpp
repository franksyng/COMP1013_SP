#include<stdio.h>

/* To Cal a sequence of number an = 3an-1 + 2
 * A sequence a1, a2, a3, a4 .... an
 * a1 = 2 */

/* Function to do the recursion */
int CalSeq(int n, int i, int a){

    if(i == n){//base case
        return a;
    }
    else
        return CalSeq(n, i + 1, ((3 * a) + 2));//to calculate the "a" value start from a1 = 2
}


/* Main function */
int main(void){

    int n, result;

    n = 16;//assign 16 to n

    result = CalSeq(n, 1, 2);//call the function and assign its result

    printf("%d", result);//print the result

    return 0;
}