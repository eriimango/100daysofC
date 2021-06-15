// 2.19 is a program that prompts user for 3 numbers and produces their, sum, product
// average, and the smallest and largest of the numbers.
// author: Ericka Howard

#include <stdio.h>

int main(void) {

    // prompt user to enter 3 numbers
    printf( "Enter three different integers: " );

    // declared int variables
    int num1;
    int num2;
    int num3;

    // reads the users input
    scanf( "%d %d %d", &num1, &num2, &num3 );

    // outcome calculations of the 3 values

    int sum;
    sum = num1 + num2 + num3;

    int avg;
    avg = sum / 3;

    int product;
    product = num1 * num2 * num3;

    // variables for smallest and largest numbers
    int small;
    int big;

    // if condition to access the smallest number
    if( num1 > num2 && num1 > num3 ) {
      big = num1;
     }
    if( num2 > num1 && num2 > num3 ) {
     big = num2;
     }
    if ( num3 > num1 && num3 > num2) {
     big = num3;
     }
    if( num1 < num3 && num1 < num2) {
     small = num1;
     }
     else if ( num2 < num3 ){
     small = num2;
      }
      else {
      small = num3;
       }

    // print outcome of calculations
    printf( "Sum is %d\n", sum );
    printf( "Average is %d\n", avg );
    printf( "Product is %d\n", product );
    printf( "Smallest is %d\n", small );
    printf( "Largest is %d\n", big );

}
