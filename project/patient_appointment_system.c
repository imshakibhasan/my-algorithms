/*#include<stdio.h>
void interface();
int main() {
   // interface ();
    
    return 0;
}

void interface () {
    printf("               WELCOME TO\n\n");

    printf("     Online Hospital Appointment System\n\n");

    for (int i=0; i<5; i++ ) {
        if ( i==2 ) {
            printf("************* Apollo Hospital **************\n");
        }
        for ( int j=1; j<45; j++) {
            printf("*");
        }
        printf("\n");
    }
}*/
#include <stdio.h> 
#include <string.h>  
//created by chaitanya 
 
int main() 
{ 
    char username[15]; 
    char password[12]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"chaitu")==0){ 
        if(strcmp(password,"123")==0){ 
 
        printf("\nWelcome.Login Success!"); 
 
 
        }else{ 
    printf("\nwrong password"); 
} 
    }else{ 
    printf("\nUser doesn't exist"); 
} 
 
 
 
 
 
    return 0; 
 
}