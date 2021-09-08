// This program test which line from contains variables that were once values that are now replaced
// the answers are in the comments
// author: Ericka H.

#include <stdio.h>

int main(void) {

// declared variables
int a;
int b;

printf( "Enter two numbers: " );
scanf( "%d%d", &a, &b );

int sum;
sum = a + b;

printf( "\nThe result is: %d ", sum );

}

// concludes that no lines assumed are of values that are replaced. The user initializes a and b, and through a and b the sum
// is then created which is all the variables declared
