#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    float marks;
};
 void main() {
    struct student s1 = { 1, "shakib", 95.50};
    struct student *ptr = &s1;
    printf("%d\t%s\t%f\n", ptr->rollno, ptr->name, ptr->marks);
    printf("%d\t%s\t%f\n", (*ptr).rollno, (*ptr).name, (*ptr).marks);
 }