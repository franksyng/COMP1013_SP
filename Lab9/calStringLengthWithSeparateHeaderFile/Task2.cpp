#include<stdio.h>
#include"Task2Lib.h"

int main(){
	int j;
	char inp[50];
	printf("Plz input a string\n");

	scanf("%s", inp);

	j = stringLength(inp);
	printf("The string length is %d\n", j);

	return 0;
}