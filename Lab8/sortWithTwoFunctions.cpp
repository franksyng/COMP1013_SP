#include<stdio.h>
int sort(int num[], int n);
int main()
{

	printf("Plz input positive integer and run with -1:\n");

	int num[50], i, j, n;

	for(i = 0;; i++)
	{
		scanf("%d", &num[i]);
		if(num[i] == -1)
		{
			break;
		}
	}

	n = i;//total input i numbers, and i included -1
	sort(num, n);//use function sort

	/* Because when processing, for instance 5 numbers, just need to do 4 comparisons. But when output, need to output 5 numbers.
    That's why use "i < n - 1" above, and use "1 <= n - 1" here*/
	for(i = 0; i < n; i++)
		printf("%d", num[i]);

	return 0;
}

int sort(int num[], int n)
{
	int i, j, temp;//declare locally because these variables have no use in the main function

	for(i = 0; i < n - 1; i++)//n included -1 which should not be counted in, so use n - 1
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if(num[j] < num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

		return 0;

}
