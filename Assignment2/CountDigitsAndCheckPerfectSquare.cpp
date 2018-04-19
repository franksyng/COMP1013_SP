#include <stdio.h>
int main(){
    int num, n, i, j = 0;

    printf("Plz input an integer\n");

    scanf("%d", &num);

    i = num;

    //To calculate how many digits the number have
    while ( i > 0){
        i /= 10;
        j++;
    }
    printf("%d have %d digits\n", num, j);

    //To tell whether the number is perfect square or not
    for(n = 0 ; n * n <= num; n++)
    {
        if (n * n == num )
        {
            printf("%d is a perfect square number\n", num);
            return 0;//If yes, break the whole programme immediately
        }
    }

    printf("%d is not a perfect square number\n", num);//If not, print nots
    return 0;
}

/* #include <math.h>
    int main (){
    int num, n;

    printf("Plz input an integer:");

    scanf("%d", &num);
    n = int(sqrt(num));
    if(n == sqrt(num)){
        printf("%d is a perfect square number", num);
    }

    return 0;
} */