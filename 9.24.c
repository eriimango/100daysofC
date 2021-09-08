// 9.24 solve.. this program shows the difference between %d and %i conversions
// author Ericka Howard
#include<stdio.h>

int main(void) {
    int month = 0;
    int day = 0;
    int year = 0;
    printf("%s", "Enter a date in the form mm-dd-yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);

    printf("%s", "Enter a date in the form mm/dd/yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);

}

