#include<stdio.h>

void main() {
    FILE *file=NULL;
    char  str[30];
    char ch;
    file = fopen("abc.txt", "w+");
    if ( file==NULL ) {
        printf("error:file doesn't exist.\n");
    }
    else {
        fputs("Shakibul Hasan", file);
        rewind(file);
        while ( !feof(file) ) {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
}