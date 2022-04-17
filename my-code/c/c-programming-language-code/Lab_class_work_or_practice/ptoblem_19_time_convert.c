#include<stdio.h>
int main() {
    int sec, hour, min, m1, s1;
    printf("\nEnter Time (in second) : ");
    scanf("%d", &sec);

    // we know "1 hour = 3600 seconds"
    hour = sec / 3600;

    printf("%d Hours,", hour);

    m1 = sec% 3600;

    // we also know "1 Minutes = 60 seconds"
    min = m1 /60;

    printf(" %d Minutes,", min);

    s1 = m1%60;
    printf(" %d Seconds", s1);
    
    return 0;
}