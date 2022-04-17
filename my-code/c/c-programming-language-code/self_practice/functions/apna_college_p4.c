/*#include<stdio.h>
int main() {
    double a, b, c;
    scanf("%lf%lf", &a,&b);
    c = (a + b)/2;
    printf("MEDIA = %.4lf", c);
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("\nEnten an Integer number to finds its square : ");
    scanf("%d", &n);
    printf("%lf", pow(n,2));
    return 0;
}