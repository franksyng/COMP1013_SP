#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int len, i;
	char *dataInpt, j;

	printf("Plz input the length of your data: ");//Hints for length input
	scanf("%d", &len);//Input length

	printf("Plz input your data: ");//Hints for data input
	dataInpt = (char*)malloc(len + 1 * sizeof(char));//Allocate memory according to the data length

	//Input and Output
	if(dataInpt != NULL){
		for(i = 0; i < len + 1; i++){
			scanf("%c", &j);//Input data
			*(dataInpt + i) = j;//Assign j to certain address
		}
		for(i = len; i > 0; i--){
			printf("%c", *(dataInpt + i));//Print the value of address in a reverse order
		}
		free(dataInpt);//Release the memory
	}
	return 0;
}