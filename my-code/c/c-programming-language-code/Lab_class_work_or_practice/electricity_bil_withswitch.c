#include <stdio.h>
int main() {
    int usageUnit;
    printf("Enter electricity usage in units :  ");
    scanf("%d",&usageUnit);
    float totalBill=0.0;
    switch (usageUnit<200){
        case 1:
            totalBill=usageUnit*5;
            printf("Case 1\n");
            break;
        case 0:
            printf("Case 0\n");
            switch(usageUnit<300){
                case 1:
                    printf("Case 01\n");
                    totalBill=199*5+(usageUnit-199)*10;
                    break;
                case 0:
                    printf("Case 00\n");
                    totalBill=199*5+100*10+(usageUnit-299)*15;
            }
    }
    printf("\nTotal Bill = %.2f\n",totalBill);
    return 0;
}
