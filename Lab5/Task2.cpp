#include<stdio.h>
int main(void){
	char grade;
    
	printf("Please input your grade: ");//Hints
	scanf("%c",&grade);//Input the grade


	/***Identify the matching point***/
	switch (grade) {

		case 'A':
		case 'a': printf("4.00");
		break;

		case 'B':
		case 'b': printf("3.00");
		break;

		case 'C': 
		case 'c': printf("2.00");
		break;

		case 'D': 
		case 'd': printf("1.00");
		break;

		case 'F': 
		case 'f': printf("0.00");
		break;

		default:
			printf("WARNING: DATA ERROR!");
	}

	return 0;
}
