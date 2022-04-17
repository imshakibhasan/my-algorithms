#include <stdio.h>
int main () {
int x = 20, y = 10;
int z = x > y; // 20 > 10 = 1
//printf("%d", z);
x+= z++ + --y; // x = 20 + 1 + 9 = 30
y %= ++x; // y =  10 % 21 = 10
printf("%d %d %d", x, y, z);
return 0;
}