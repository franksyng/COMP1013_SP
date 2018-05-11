#include<stdio.h>

/* Sort a sequence of integers */

//Function to sort
int sort(int a[], int i){

    int j, k, temp;//declare locally

    for(j = 0; j < i - 1; j++){//i included the last input "-1" to stop the loop, so use i - 1
        for(k = 0; k < i - 1 - j; k++){//j counts how many integers have been sorted
            if(a[k] < a[k + 1]){
                temp = a[k + 1];
                a[k + 1] = a[k];
                a[k] = temp;
            }
        }
    }
    return 0;

}

//Main function
int main(void){

    int i, n, a[20];

    printf("Plz input a sequence of integers (Start sorting with -1");//give hint

    /* Improved input method, which making "-1" is also able to be sorted */
    for(i = 0; i < 20; i++){

        scanf("%d", &a[i]);//the first input

        if(a[i] == -1){
            /* This is the Double Check Part
             * If "-1" is one of the number in the sequence, input "-1" again to make it in the array
             * If want to start sorting, just input "1" */
            printf("Start sorting? Yes = 1, No = -1");
            scanf("%d", &a[i]);

             if(a[i] == 1){
                 break;
             }
        }

    }

    n = i;

    sort(a, i);//call the sort function

    for(i = 0; i < n; i++) {//print the result
        printf("%d", a[i]);
    }

    return 0;
}