#include <stdio.h>
int main() {
    int days, years, weeks, day;
    
    printf("\nEnter Days : ");
    scanf("%d", &days);
    
    years = days / 365;
    printf(" %d Years,", years);

    years = days % 365;
    
    weeks = years /7;
    printf(" %d Weeks,", weeks);
    
    day = years % 7;
    printf(" %d Day ", day);
    
    return 0;
}