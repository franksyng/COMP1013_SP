#include<stdio.h>
/* How to sort numbers (Using Bubble Sort here) */
int main(void){
    printf("Plz input positive integer and run with -1:");

    int num[50], i, n, j, swap;

    for( i=0 ;; i++ )//Calculate the quality of input numbers
    {
        scanf("%d", &num[i]);
        if (num[i] == -1)
        {
            break;//Stop the loop if -1 is input
        }

    }
    n = i;//Use n to present the quality of input numbers

    for( i = 0; i < n - 1; i++) { //n should minus 1 to equal to the quantity of array (because array starts from 0)
        for (j = 0; j < n - 1 - i; j++) { //the i here means how many arrays you have processed ( [0,1,2,3,4] 5 total)
            if (num[j] > num[j + 1]) { //Loop to compare which is greater
                swap = num[j];
                num[j] = num[j + 1];
                num[j + 1] = swap;
            }

        }
    }
    /* Because when processing, for instance 5 numbers, just need to do 4 comparisons. But when output, need to output 5 numbers.
       That's why use "i < n - 1" above, and use "1 <= n - 1" here*/
    for(i = 0; i <= n - 1; i++)
        printf("%d\n", num[i]);

    return 0;
}