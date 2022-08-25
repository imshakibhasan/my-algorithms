#include<stdio.h>
union abc {
    int a;
    char b;
    float c;
};
void main() {
    union abc u;
    union abc *ptr = &u;
    u.a=1;
    u.b=97;
    //u.c=78.90;
    //printf("\na Value is :%d", u.a);
    //printf("\nb Value is :%c", u.b);
    //printf("\nc Value is :%f", u.c);
    printf("\na Value is :%d", ptr->a);
    printf("\nb Value is :%c", ptr->b);
    //printf("\nc Value is :%f", ptr->c);

}
