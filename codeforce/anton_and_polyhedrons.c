/**
 * @file anton_and_polyhedrons.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/785/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int n, i, faces = 0;
    char str[13], s1[] = "Tetrahedron", s2[] = "Cube", s3[] = "Octahedron", s4[] = "Dodecahedron", s5[] = "Icosahedron";
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", str);
        if (strcmp(s1, str)==0) {
            faces = faces + 4;
        }
        else if (strcmp(s2, str)==0) {
            faces = faces + 6;
        }
        else if (strcmp(s3, str)==0) {
            faces = faces + 8;
        }
        else if (strcmp(s4, str) == 0) {
            faces = faces + 12;
        }
        else {
            faces = faces + 20;
        }
    }
    printf("%d", faces);
    return 0;
}