/*#include<stdio.h>
int main() {
    char str[10], a[10];
    //scanf("%s", a);
    gets( str);
    //printf("%10.5s\n", str);
    printf("%s", &str[2]);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main() {
    int count = 0;
    char name[30];
    printf("Enter Name: ");
    gets(name);
    count = strlen(name);
    printf("The String Length Is--%d", count);
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int main() {
    int i=0, count = 0;
    char name[30];
    printf("Enter Name: ");
    //gets(name);
    while ( name[i] !='\0' ) {
        //count++;
        i++;
    }
    //printf("String Length is: %d", count);
    printf("String Length is: %d", i);
    return 0;    
}*/

// concatenate two strings with strcat function
/*#include<stdio.h>
#include<string.h>
int main() {
    //int i=0, count = 0;
    char s1[30], s2[30];
    printf("Enter s1 Name: ");
    gets(s1);
    printf("Enter s2 Name: ");
    gets(s2);
    strcat(s2,s1);
    printf("%s", s2);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main() {
    int len1, len2;
    char s1[30], s2[30];
    printf("Please Enter s1 String: ");
    gets(s1);
    printf("Please Enter s2 String: ");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    printf("S1 = %d", len1);
    printf("\nS1 = %d", len2);
    for ( int i=0; i<len2; i++ ) {
        s1[len1+i] = s2[i];
    }
    printf("%s", s1);
    return 0;
}*/

//Compare two string  with strcmp function
/*#include<stdio.h>
#include<string.h>
int main() {
    int value;
    char s1[30], s2[30];
    printf("\nPlease Enter s1 string:");
    gets(s1);
    printf("\nPlease Enter s2 string:");
    gets(s2);
    value = strcmp(s1, s2);
    if ( value==0 ) {
        printf("\nThe Strings Are Same.");
    }
    else {
        printf("\nThe Strings Are Not Same.");
    }
    printf("\nValue = %d", value);
    return 0;
}*/

// Compare Two String
/*#include<stdio.h>
#include<string.h>
int main() {
    int flag=0;
    char s1[30], s2[30];
    printf("Please Enter s1 String: ");
    gets(s1);
    printf("Please Enter s2 String: ");
    gets(s2); 
    for ( int i=0; s1[i]!='\0' || s2[i]!='\0'; i++ ) {
        if ( s1[i]!=s2[i] ) {
            flag = 1;
            break;
        }
    }
    if ( flag==0 ) {
        printf("\nStrings are Same.");
    }
    else {
        printf("\nStrings Are Not Same.");
    }
    return 0;
}*/

//Reverse A String With strrev Function

/*#include<stdio.h>
#include<string.h>
int main() {
    //int i, ch, len;
    char s1[30];
    printf("Please Enter String S1 : ");
    scanf("%29s", s1);
    //len = strlen(s1);
    //for ( i=0; i<(len/2); i++ ) {
      //  ch = s1[i];
       // s1[i]= s1[len-1-i];
       // s1[len-1-i] = ch;
   // }
    strrev(s1);
    printf("%s", s1);
    return 0;
}*/

//Convert A string From Upper Case to lower Case with strlwr function
/*#include<stdio.h>
#include<string.h>
int main() {
    int i ;
    char s1[30];
    printf("Please Enter s1 String : ");
    gets(s1);
    strlwr(s1);
    //strupr(s1);
    printf("%s", s1);
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int i ;
    char s1[30];
    printf("Please Enter String S1 : ");
    gets(s1);
    for ( i=0; s1[i]!='\0'; i++ ) {
        if ( s1[i]>='a' && s1[i]<'z' ) {
            s1[i] = s1[i]-32;
        }
    }
    printf("%s", s1);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main() {
    char a[30];
    //= "abcdef\0gh";
    // = "Shakibul Hasan";
    //char a[5] = { 'a', 'b', 'c'};
    scanf("%s", a);
    //gets(a);
    printf("%s", &a[4]);
    return 0;
}*/