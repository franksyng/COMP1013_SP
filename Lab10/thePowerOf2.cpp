#include<stdio.h>
int Power2(int n, int i);

int main(void){

	int n, k;

	printf("Plz input the exponet of 2: ");
	scanf("%d", &n);

	k = Power2(n, 1);

	printf("2 to the power of %d is %d\n", n, k);

	return 0;
}

int Power2(int n, int i){
	
	if(n > 0){
		Power2(n - 1, i * 2);//n - 1 each time
	}

	else if(n <= 0){//Base case
		return i;

	}
}