#include<stdio.h>

int Fac(int k, int n);

int main(void) {

    int n, j;

    printf("Plz input an integer: ");
    scanf("%d", &n);

    j = Fac(1, n);//Call the function Fac()

    printf("%d! = %d", n, j);

}

int Fac(int k, int n) {
    if (k == n)//Base case
        return n;
    else
        return Fac(k + 1, n) * k;//Let k * (k + 1)! = k * (k + 1), (k + 1 + 1)! = k * (k + 1) * (k + 1 + 1)....
}
