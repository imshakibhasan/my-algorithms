#include<stdio.h>
#include<string.h>
void main() {
    FILE *file;
    char str[30];
    int i;
    file = fopen("first.txt", "w");
    if ( file==NULL ) {
        printf("Error:File Doesn't Find.\n");
    }
    else {
        printf("Enter The String: \n");
        gets(str);
        for ( i=0; i!=strlen(str); i++ ) {
            fputs(str[i], file);
        }
        fclose(file);
    }

}