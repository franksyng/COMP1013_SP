#include<stdio.h>

int fileCopy(char *destFileName, char *resFileName){
	FILE *res, *dest;

	char c;

	res = fopen(resFileName, "r");
	dest = fopen(destFileName, "w");



	if(res == NULL){
		return 0;
	}
	else{
		while((c = fgetc(res) != EOF)){
			fputc(c, dest);
		}

		return 1;
	}

	fclose(res);
	fclose(dest);
}
int main()
{
    char str1[20], str2[20];
    int flag;
    scanf("%s", str1); // read name of file (.txt) to be copied
    scanf("%s", str2); // read name of file (.txt) to copy to
    flag = fileCopy(str2, str1);
    if (flag == 1) 
      printf("Success");
    else 
      printf ("Failure");
    return 0;
}