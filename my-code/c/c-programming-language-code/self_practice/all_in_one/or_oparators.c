#include<stdio.h>
int main() {
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    //if(num >= 1 || num <= 10)
    if( n <=1 || n>= 10 ){
        printf("Yes\n");        
    }
    else{
        printf("No\n");
    }
    return 0;
}