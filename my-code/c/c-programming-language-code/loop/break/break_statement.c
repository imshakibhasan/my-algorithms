#include <stdio.h>
int main() {
    int n = 1;
    while (n <= 100) {
        printf("%d)\n", n);
        n++;
        if(n > 25) {
            break;
        }
    }
    return 0;
}