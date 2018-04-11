#include<stdio.h>
/* How to print
 * *******
 * ******#
 * *****##
 * ****###
 * ***####
 * **#####
 * *###### */
int main(void){

	int col, row;

	for( col = 7; col >= 1; col--){
		for ( row = 1; row <= 7; row++)
			if( col >= row ){
				printf("*");
			}
			else
				printf("#");
		

		printf("\n");
	}
	
}