#include<stdio.h>
int main() {
    int i, j, k;
    for ( j=0; j<27; j++) {
        for ( k=0; k<3; k++) {
            printf("%c", 'A'+j);
        }
    }
    printf("\n");
    return 0;
}