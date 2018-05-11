#include<stdio.h>
#include"Q3lib.h"

/* To Cal 2^n1 + 2^n2 + 2^n3*/
int main(void){

	int n[3], i, result[3], total = 0;
	printf("Plz input three integers");//print hint

	//loop for input
	for(i = 0; i < 3; i++){//only three numbers can be input
		scanf("%d", &n[i]);
		result[i] = Power2(n[i]);
	}
	
	//loop for summing up the results
	for(i = 0; i < 3; i++){
		total += result[i];
	}

	printf("The result is %d\n", total);//print the result

	return 0;
}
