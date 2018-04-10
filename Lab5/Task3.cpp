#include<stdio.h>
int main(void){
	int a,sum = 0;//Define sum and int a

	for (a = 1; a <= 100; a = a + 2) sum += a;//Loop and sum each time
		
	printf("%d", sum);//Print result

	return 0;
}