#include<stdio.h>

void main() {
    FILE *file=NULL;
    char ch;
    file = fopen("abc.txt", "a+");
    if ( file==NULL ) {
        printf("error:file doesn't exist.\n");
    }
    else {
        fputs(" in East West University.", file);
        rewind(file);
        while ( !feof(file) ) {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
}