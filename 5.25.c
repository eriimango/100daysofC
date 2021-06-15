// 5.25 this program finds the maximum number of 4 user input integers
// author: Ericka Howard
#include<stdio.h>
    float large (float a, float b, float c, float d)
    {
        if (a >= b && a >= c)
            return a;
        else
            return c;

    }

    int main (){
        float num1;
        float num2;
        float num3;
        float num4;
        float largest;

    printf("Enter 4 numbers: \n");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    largest = large(num1, num2, num3, num4);
    printf("The largest number you entered is : %.2f", largest);
    }
