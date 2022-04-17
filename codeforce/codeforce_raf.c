#include <stdio.h>
int main()
{
    int n, p, count = 0;
    scanf("%d%d", &n, &p);
    if (n == p) {
        printf("0\n");
    }
    else if (n > p) {
        if (n % p == 0) {
            printf("0\n");
        }
        else {
            while (n % p != 0) {
                n++;
                count++;
            }
            printf("%d\n", count);
        }
    }
    else {
        while (n % p != 0) {
            n++;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}