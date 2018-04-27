#include<stdio.h>
#include<string.h>
int main(){

    int l = 1, i = 0;
    char inp[100], k[] ="End";

    printf("Plz input a string ends with word End.\n");


    while(l != 0){
        scanf("%s", &inp);
        l = strcmp(inp , k);
        i++;
    }


    printf("The string has %d words.", i - 1);
    return 0;
}