#include<stdio.h>
/* How to calculate string length */
int main(void){

	printf("Plz input your string:");//Tips

	char input[50];//Declare array that contain 50 elements
	int i;

	scanf("%s", &input);//Input string

	for(i = 0; input[i] != '\0'; ++i);//Loop to test the string end or not

	printf("The string length is %d\n", i);

}