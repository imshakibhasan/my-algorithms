#include<stdio.h>

void main() {
    FILE *file=NULL;
    char ch;
    file = fopen("prints_function.txt", "r");
    if ( file==NULL ) {
        printf("error:file doesn't exist.\n");
    }
    else {
        fseek(file, 6, SEEK_SET);
        ch = fgetc(file);
        printf("%c\t", ch);
        fseek(file, (-3), SEEK_CUR);
        ch =fgetc(file);
        printf("%c\t", ch);
        fseek(file, -10, SEEK_END);
        ch =fgetc(file);
        printf("%c\t", ch);
    }
}