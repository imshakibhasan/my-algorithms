/*
#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    float marks;
}s3 = {3};
void main() {
    //compile time Initialization...
    struct student s1 = { 1, "Shakib Hasan", 95.6};
    struct student s2 = { 2, "Sumaiya Khatun", 86.35};
    printf("Information Of s1...\n");
    printf("%d\t%s\t%lf\n\n\n", s1.rollno, s1.name, s1.marks);
    printf("Information Of s2...\n");
    printf("%d\t%s\t%lf\n\n\n", s2.rollno, s2.name, s2.marks);
    printf("Information Of s3...\n");
    printf("%d\t%s\t%lf\n", s3.rollno, s3.name, s3.marks);
}
*/

/*
#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    float marks;
}s3={3};
struct student s1 = { 1, "Shakib Hasan", 95.6};    
//struct student s2 = { 2, "Sumaiya Khatun", 86.35};
struct student s2;
void main() {
    //compile time Initialization...
    s2 =s1;
    printf("Information Of s1...\n");
    printf("%d\t%s\t%lf\n\n\n", s1.rollno, s1.name, s1.marks);
    printf("Information Of s2...\n");
    printf("%d\t%s\t%lf\n\n\n", s2.rollno, s2.name, s2.marks);
    printf("Information Of s3...\n");
    printf("%d\t%s\t%lf\n", s3.rollno, s3.name, s3.marks);
}
*/

//using scanf... 
#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    float marks;
}s3 = {3};
void main() {
    //compile time Initialization...
    struct student s1 = { 1, "Shakib Hasan", 95.6};
    struct student s2;
    // = { 2, "Sumaiya Khatun", 86.35};
    
    printf("Enter Information For s2...\n");
    scanf("%d %s %f", &s2.rollno, s2.name, &s2.marks);

    printf("Information Of s1...\n");
    printf("%d\t%s\t%f\n\n\n", s1.rollno, s1.name, s1.marks);
    printf("Information Of s2...\n");
    printf("%d\t%s\t%f\n\n\n", s2.rollno, s2.name, s2.marks);
    printf("Information Of s3...\n");
    printf("%d\t%s\t%f\n", s3.rollno, s3.name, s3.marks);
}