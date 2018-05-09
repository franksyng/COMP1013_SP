#include<stdio.h>
#include<string.h>

struct stuRec{
    char Na[10], Ma[3];
    double Sc;
};
struct stuRec stu[50];

int main(void){

    int i, j, m, n;
    char stop[] = "end";
    struct stuRec temp;

    //loop for input
    for(i = 0; i < 50; i++){
        printf("Plz input students' records <use 'end' to stop inputting>");
        scanf("%s", stu[i].Na);

        if(strcmp(stop, stu[i].Na )== 0) {//break the when "end" is input
            break;
        }
        else{//if the loop continues, ask to input the score and major
            printf("Plz input the score");
            scanf("%lf", &stu[i].Sc);

            printf("Plz input the major");
            scanf("%s", stu[i].Ma);
        }
    }

    n = i;//assign i to n

    //to put the inputs in ascend order
    for(j = 0; j < i - 1; j++) {
        for (m = 0; m < n - 1 - j; m++) {//j means how many inputs have been sorted
            if (strcmp(stu[m].Na, stu[m + 1].Na) > 0){//if in ASCII code the former one greater than the latter one, switch position
                temp = stu[m];
                stu[m] = stu[m + 1];
                stu[m + 1] = temp;
            }
        }
    }

    //print the result
    for(i = 0; i < n; i++) {
        printf("%s %lf %s\n", stu[i].Na, stu[i].Sc, stu[i].Ma);
    }

    return 0;
}
