/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void first();
void sec();
void third();
void main () {

    void first();
   // void sec();
   // void third();
}
void first() {

    FILE *fp=NULL;
    char ch='s';
    //="Shakibul Hasan\nMd Sajeeb";
    fp = fopen("abc.txt", "w");
    if ( fp==NULL ) {
        printf("error");
        exit(1);
    }
    //printf("Enter The String: ");
    //getc(ch);
    fputc(ch,fp);
    fclose(fp);
}
/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sec() {

    FILE *fp=NULL;
    char ch[30];
    //="Shakibul Hasan\nMd Sajeeb";
    fp = fopen("sec.txt", "w");
    if ( fp==NULL ) {
        printf("error");
        exit(1);
    }
    printf("Enter The String: ");
    gets(ch);
    for ( int i =0; i!=strlen(ch); i++ ) {
        fputc(ch[i],fp);
    }
    fclose(fp);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void third() {

    FILE *fp=NULL;
    char ch[30];
    //="Shakibul Hasan\nMd Sajeeb";
    fp = fopen("third.txt", "w");
    if ( fp==NULL ) {
        printf("error");
        exit(1);
    }
    printf("Enter The String: ");
    gets(ch);
    fputs(ch,fp);
    fclose(fp);
}*/
/*#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
void main() {

    FILE *fp=NULL;
    char ch='h';
    //="Shakibul Hasan\nMd Sajeeb";
    fp = fopen("abc.txt", "w");
    if ( fp==NULL ) {
        printf("Error");
        exit(1);
    }
    fputc(ch,fp);
    fclose(fp);
}*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
void main() {

    FILE *fp=NULL;
    char ch[50];
    int i;
    fp = fopen("stringg.txt", "w");
    if ( fp==NULL ) {
        printf("Error");
        exit(1);
    }
    gets(ch);
    for ( i=0; i!='\0'; i++ ) {
        fputc(ch[i], fp);
    }
    fclose(fp);
}