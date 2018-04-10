#include<stdio.h>
int main(void){
	int row, col;

	for (row = 7; row >= 1; row--){
	
		for (col = row; col >= 1; col--)  printf("*");

		printf("\n");
	}
	
}