#include<stdio.h>

void stringCopy(char *dest, char *res){
	int i;

	for(i = 0; *(res + i) != '\0'; i++){
		*(dest + i) = *(res + i);
	}
	*(dest + i) = '\0';
}

int main(){
    char str1[20], str2[20];
    scanf("%s", str1);

    stringCopy(str2, str1);

    printf("%s\n", str2);
    return 0;
}