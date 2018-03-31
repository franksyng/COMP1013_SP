#include<stdio.h>
int main() {
    int i = 0, j = 5;
    char ch;
    float f;
    scanf("%c", &ch);
    printf("%d is the ASCII code of '%c'\n", ch,  ch);
    printf("the value of i is %d\n", i);
    i = ch;
    printf("the value of i is %d\n", i);
}



//1. When built the compiler showed that "expected ';' before '}' token

//2. When input it showed that the programme has stopped working, because there is still missing a & before the scanf ch.