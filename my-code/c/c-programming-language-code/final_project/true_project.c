#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
void frontpage();
void login();
struct project {
    char first_name[30];
    char last_name[30];
    char user_name[30];
    char password[33];
};

int main() {
    frontpage();
    system("CLS");
    login();

return 0;
}
void frontpage() {
    printf("           Patient Appointment System\n\n\n");
    for ( int i=0; i<2; i++ ) {
        for ( int j=0; j<46; j++ ) {
            printf("*");
        }
        printf("\n");
    }
    printf("********* Welcome To Apollo Hospital *********\n");
    for ( int i=0; i<2; i++ ) {
        for ( int j=0; j<46; j++ ) {
            printf("*");
        }
        printf("\n");
    }
}
void login() {
    int n;
    printf("           Patient Appointment System\n\n\n");
    printf("\n1. Sign Up\n");
    printf("\n2. Sign In\n");
    printf(" \nEnter Your Choice: \n");
    scanf("%d", &n);
    if ( n==1 ) {

    }
    else if ( n==2) {

    }
    else {
        printf("\nInvalid Choice...\nPlease Enter Correct Number...\n");
        login();
    }
}
