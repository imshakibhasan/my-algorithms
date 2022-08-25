#include<stdio.h>
int main() {
    int i, n;
    FILE *file;
    char name[30];
    file = fopen("test.txt","w");
    if ( file==NULL ) {
     printf("\nFile does not Exist.");
    }
     else {
        printf("\nFile is opened.\n");
        printf("\nEnter your full Name: ");
        gets(name);
        fputs(name,file);
        printf("\nFile is written Successfully.");
        fclose(file);
    }
    return 0;
}