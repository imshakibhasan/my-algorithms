#include<stdio.h>
struct student {


    int rollno;
    char name[20];
    float marks;
};

void main() {
    struct student s[3];
    printf("Enter Information...\n");
    for ( int i=0; i<3; i++ ) {
        scanf("%d%s%f", &s[i].rollno, s[i].name, &s[i].marks);
    }
    for ( int i=0; i<3; i++ ) {
        printf("%d\t%s\t%f\n", s[i].rollno, s[i].name, s[i].marks);
    }
}