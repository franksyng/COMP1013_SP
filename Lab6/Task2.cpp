#include<stdio.h>
int main(void)
{
	int row, col;
	char ch;

	for (row = 7; row >= 1; row--)
	{
		if (row % 2 == 1)
			ch = '*';
		else
			ch = '=';
		
		for (col = row; col >= 1; col--) printf("%c", ch);

		printf("\n");
	}

}