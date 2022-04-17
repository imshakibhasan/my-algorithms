#include<stdio.h>
int main() {
    int n, d1, d2;
    printf("\nEnter an Integer Number : ");
    scanf("%d", &n);
    
    d1 = n%10;

    n = n/10;
    
    d2 = n % 10;

    n= n/10;
    switch (n) {
        case 0 :break;
        case 1 : printf("One Hundred");
            break;
        case 2 : printf("two Hundred");
            break;
        case 3 : printf("Three Hundred");
            break;
        case 4 : printf("Four Hundred");
            break;
        case 5 : printf("Five Hundred");
            break;
        case 6 : printf("Six Hundred");
            break;
        case 7 : printf("Seven Hundred");
            break;
        case 8 : printf("Eight Hundred");
            break;
        //printf(" Hundred");
        default:
            printf("Nine Hundred");
    }
    switch (d2) {
        case 0 : 
            break;
        case 1 :
            switch (d1) {
                case 0 : printf(" Ten");
                    break;
                case 1 : printf(" Eleven");
                    break;
                case 2 : printf(" Tweleve");
                    break;
                case 3 : printf(" Thirteen");
                    break;
                case 4 : printf(" Rourteen");
                    break;
                case 5 : printf(" Fifteen");
                    break;
                case 6 : printf(" Sixteen");
                    break;
                case 7 : printf(" Seventeen");
                    break;
                case 8 : printf(" Eightteen");
                    break;
                default : 
                    printf(" Nineteen");
            }
        case 2 : printf(" Twenty");
            break;
        case 3 : printf(" Thirty");
            break;
        case 4 : printf(" Fourty");
            break;
        case 5 : printf(" Fifty");
            break;
        case 6 : printf(" Sixty");
            break;
        case 7 : printf(" Seventy");
            break;
        case 8 : printf(" Eighty");
            break;
        default : 
            printf(" Ninety");    
    }
    switch (d1) {
        case 0 : 
            break;
        case 1 : printf(" One");
            break;
        case 2 : printf(" Two");
            break;
        case 3 : printf(" Three");
            break;
        case 4 : printf(" Four");
            break;
        case 5 : printf(" five");
            break;
        case 6 : printf(" Six");
            break;
        case 7 : printf(" Seven");
            break;
        case 8 : printf(" Eight");
            break;
        default :
            printf(" Nine");
    }
    return 0;

}