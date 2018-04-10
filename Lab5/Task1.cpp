#include<stdio.h>
int main(void){
	float h, w;
	scanf("%f%f",&h, &w);//Input data

	if (h-105 > w + 20)	printf("You are too slim.\n"); //See if satisfied first criteria

	else if (w - 10 < h - 105 <= w +20) printf("You are fit.\n");//See if satisfied second criteria
		else printf("You are fat.\n");
	
	return 0;
}