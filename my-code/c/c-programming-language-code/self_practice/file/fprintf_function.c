#include<stdio.h>
#include<string.h>
void main() {
    FILE *file;
    char str[30];
    int i, a=10;
    char ch='S';
    file = fopen("prints_function.txt", "a");
    if ( file==NULL ) {
        printf("Error:File Doesn't Find.\n");
    }
    else {
        printf("Enter The String: \n");
        gets(str);
        fprintf(file, "\n%d\t%s\t%c", a, str, ch);
        fclose(file);
    }

}