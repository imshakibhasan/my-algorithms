/*#include<stdio.h>

void main() {
    FILE *file=NULL;
    char ch;
    file = fopen("prints_function.txt","r");
    if ( file==NULL ) {
        printf("Error\n");
    }
    else {
        ch = getc(file);
        printf("%c", ch);
        fclose(file);
    }
}*/

/*#include<stdio.h>

void main() {
    FILE *file=NULL;
    char ch;
    file = fopen("prints_function.txt","r");
    if ( file==NULL ) {
        printf("Error\n");
    }
    else {
        while ( !feof(file) ) {
            ch = getc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
}*/

/*#include<stdio.h>

void main() {
    FILE *file=NULL;
    char str[50];
    file = fopen("prints_function.txt","r");
    if ( file==NULL ) {
        printf("Error\n");
    }
    else {
        fgets( str, 5, file);
        printf("%s", str);
        fclose(file);
    }
}*/

#include<stdio.h>

void main() {
    FILE *file=NULL;
    char str[50];
    file = fopen("prints_function.txt","r");
    if ( file==NULL ) {
        printf("Error\n");
    }
    else {
        while ( !feof(file) ) {
            fgets( str, 5, file);
            printf("%s", str);
        }
        fclose(file);
    }
}