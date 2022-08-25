/*#include<stdio.h>
struct abc {
    char a;
    int b;
};
void main() {
    struct abc s;
    printf("%d", sizeof(s)); 
}*/
//before adding #pragma abc(1), memory allocated 8 bytes


/*#include<stdio.h>
#pragma pack(1);
struct abc {
    char a;
    int b;
};
void main() {
    struct abc s;
    printf("%d", sizeof(s)); 
}*/
#include<stdio.h>
//#pragma pack(1);
struct abc {
    char a;
    int b;
    double c;
};
void main() {
   // double d;
   // printf("%ld\t", sizeof(d));
    struct abc s;
    printf("%ld", sizeof(s)); 

}
