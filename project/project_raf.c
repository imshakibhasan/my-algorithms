#include<stdio.h>
#include<string.h>
int main() {
    int p=10, q=10, r;
    char s1[] = "a";
    char s2[] = "A";
    //p = strcmp(s1, s2);
    //printf("\n p = %d", p);

    r = p%q;
    printf("\n%d", r);


    /*FILE *fp;
    char pass[30];
    char name[30];
    fp = fopen("raf.txt", "w");
    scanf("%s", pass);
    scanf("%s", name);
    fwrite(&pass, 30, 1, fp);
    fwrite(&name, 30, 1, fp);
    fclose(fp);
    FILE *file;
    char e_p[30];
    char e_n[30];
    char p[30], n[30];
    file = fopen("raf.txt", "r");
    fread(&e_p, 30, 1, file);
    fread(&e_n, 30, 1, file);
    printf("\nname is = %s", e_n);
    //scanf("%s", p);
    scanf("%s", n);
    if ( (strcmp(e_n, n)) ) {
        printf("\nYes");
    }
    else {
        printf("\nNo");
    }*/
    return 0;
}
// && (strcmp(e_p, p)) )


