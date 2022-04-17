#include <stdio.h>
int main () {
int x = 10, y = 20;
int z = x > y;
x+= z++ + --y;
y %= ++x;
printf("%d%d%d", x, y, z);
return 0;
}