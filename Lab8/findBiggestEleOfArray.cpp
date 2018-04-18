#include<stdio.h>
void biggestEle(float a[], int n); // function prototype
int main(){
	float value[4] = {2.5, -4.75, 1.2, 3.67};

	biggestEle(value, 4);

	printf("value[0] = %f\n", value[0]);

	return 0;
}
void biggestEle(float a[], int n){
	float temp;
	temp = a[0];
	a[0] = a[n - 1];
	a[n - 1] = temp;
}