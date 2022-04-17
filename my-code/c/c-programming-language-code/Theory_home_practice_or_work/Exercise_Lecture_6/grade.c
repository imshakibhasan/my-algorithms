#include<stdio.h>
int main() {
    float score;
    printf("\nEnter Score : ");
    scanf("%f", &score);

    if((score>0 &&score<=100)) {
        if(score>=90) {
            printf("Grade : A");
        }
        else if(score>=80) {
            printf("Grade : B");
        }
        else if (score>=70) {
            printf("Grade : C");
        }
        else if (score>=60) {
            printf("Grade : D");
        }
        else {
            printf("F");
        }
    }
    else printf("\nInvalid Score");
    
    return 0;
}