#include <stdio.h>

int main(void)
{
    int col, row;

    for (row = 6; row >= 1; row --) {
        for (col = 1; col <= (2 * (row - 1)) ; col++) {


            //To make it print # in odd column, and make it print * in even column
            if (col % 2 == 0) {
                printf("*");
            }
            else
                printf("#");

            }
        //Print the last #
            if (row == 1) {
                printf("#");
            }
                printf("\n");
        }
    return 0;
}