#include<stdio.h>

void main() {
    FILE *file=NULL;
    char str[30];
    file = fopen("prints_function.txt", "r+");
    if ( file==NULL ) {
        printf("Error:file doesn't found.\n");
    }
    else {
        //fputc('z', file);
        while ( !feof(file) ) {
            fgets(str, 5, file);
            printf("%s", str);
        }
        fputs("Shakib", file);
        fclose(file);
    }
}