#include<stdio.h>
int main() {
    double score, age;
    
    printf("\nEnter Score : ");
    scanf("%lf", &score);
    
    printf("\nEnter Age : ");
    scanf("%lf", &age);
    
    if (score>70) {
        printf("\nYou pass");
        if (age>18) {
           printf("\nGood job");
        }
        else {
            printf("\nExcellent job");
        }
    }
    else {
        printf("\nYou Fail");
        if (age>18) {
            printf("\nVery bad");
            printf("\nGood luck next time");
        }
        else {
            printf("\nDon't worry");
            printf("\nGood luck next time");
        }
    }
    return 0;
}