#include <stdio.h>  
 int main()  
 {  
     double num1, num2, value;  
     printf("Please enter a number: ");  
     scanf("%d", &num1);  
     printf("Please enter another number: ");  
     scanf("%d", &num2);
     value = num1+num2;  
     printf("%lf", value); 
     value = num1-num2; 
     printf("%lf"), value;
     value = num1*num2;  
     printf("\n%lf", value);
     value = num1/num2;  
     printf("%lf", value);  
     return 0;  
 }  
