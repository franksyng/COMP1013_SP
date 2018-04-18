#include<stdio.h>
int compareASCIICode(char c1, char c2);//funciton prototype
int main(void)
{
	char c1, c2;
	int result;
	printf("Plz input two characters: ");
	scanf("%c %c", &c1, &c2);//input characters

	result = compareASCIICode(c1, c2);//use function compareASCIICode

	printf("The compare result is %d", result);//print result
}

int compareASCIICode(char c1, char c2)//get return value
{	
	
	if(c1 > c2)
	{
		return 1;
	}
	else if(c1 == c2)
	{
		return 0;
	}
	else
		return -1;
}

