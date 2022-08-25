#include<stdio.h>
void main() {
    FILE *file=NULL;
    char str[50];
    file = fopen("prints_function.txt", "a");
    if ( file==NULL ) {
        printf("Error:File Doesn't Found.\n");
    }
    else {
        printf("Enter the content you want to append: \n");
        gets(str);
        fputs(str,file);
        //fprintf(file,"\n%s", str);
        fclose(file);
    }
}